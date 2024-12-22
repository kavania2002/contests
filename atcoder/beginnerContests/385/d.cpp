#include <bits/stdc++.h>
#define ll long long
#define int long long
#define float double
#define endl "\n"
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define forp(i, x, t) for (int i = x; i < t; i++)
#define forn(i, t) for (int i = t; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define veci vector<int>
#define vecs vector<string>
#define YES cout << "Yes\n";
#define NO cout << "No\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<pair<int, int>> houses(n);
    unordered_map<int, veci> group_x, group_y;
    forp (i, 0, n) {
        cin >> houses[i].first >> houses[i].second;
        group_x[houses[i].first].pb(houses[i].second);
        group_y[houses[i].second].pb(houses[i].first);
    }

    for (auto& [_, vec] : group_x) sort(all(vec));
    for (auto& [_, vec] : group_y) sort(all(vec));

    int cur_x = x, cur_y = y;
    set<pair<int, int>> visited;

    forp(i, 0, m) {
        char d; int c;
        cin >> d >> c;

        if (d == 'U') {
            if (group_x.count(cur_x)) {
                auto& vec = group_x[cur_x];
                auto it = lower_bound(all(vec), cur_y + 1);
                while (it != vec.end() && *it <= cur_y + c) {
                    visited.insert({cur_x, *it});
                    ++it;
                }
            }
            cur_y += c;
        } else if (d == 'D') {
            if (group_x.count(cur_x)) {
                auto& vec = group_x[cur_x];
                auto it = lower_bound(all(vec), cur_y - c);
                while (it != vec.end() && *it < cur_y) {
                    visited.insert({cur_x, *it});
                    ++it;
                }
            }
            cur_y -= c;
        } else if (d == 'R') {
            if (group_y.count(cur_y)) {
                auto& vec = group_y[cur_y];
                auto it = lower_bound(all(vec), cur_x + 1);
                while (it != vec.end() && *it <= cur_x + c) {
                    visited.insert({*it, cur_y});
                    ++it;
                }
            }
            cur_x += c;
        } else {
            if (group_y.count(cur_y)) {
                auto& vec = group_y[cur_y];
                auto it = lower_bound(all(vec), cur_x - c);
                while (it != vec.end() && *it < cur_x) {
                    visited.insert({*it, cur_y});
                    ++it;
                }
            }
            cur_x -= c;
        }
    }

    cout << cur_x << ' ' << cur_y << ' ' << visited.size() << endl;

    return 0;
}
