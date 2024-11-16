#include <bits/stdc++.h>
#define ll long long
#define float double
#define endl "\n"
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<pair<int, int>> vp;
    int l = -1, r = 0;
    while (r < s.size()) {
        if (s[r] == '1') {
            if (l == -1) l = r;
        } else {
            if (l != -1) {
                vp.push_back({l, r-1});
                l = -1;
            }
        }
        r++;
    }

    if (l != -1) {
        vp.push_back({l, r-1});
    }

    k--;
    forp(i,0,vp[k].second+1-vp[k].first) {
        s[vp[k-1].second + i + 1] = '1';
        s[vp[k].first + i] = '0';
    }

    cout << s << endl;

    return 0;
}