#include <bits/stdc++.h>
#define ll long long
#define float double
#define endl "\n"
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define forp(i, x, t) for (ll i = x; i < t; i++)
#define forn(i, t) for (ll i = t; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define veci vector<ll>
#define vecs vector<string>
#define YES cout << "Yes\n";
#define NO cout << "No\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

vector<string> grid;
string s;
ll n, m;

vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

ll bfs(int x, int y) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<vector<int>> q;
    q.push({x, y, 0});
    visited[x][y] = true;

    ll counter = 0;
    while (!q.empty()) {
        vector<int> node = q.front();
        int i = node[0], j = node[1], d = node[2];
        q.pop();

        if (d == 9) {
            counter++;
            continue;
        }

        forp(k, 0, 4){
            int ni = i + directions[k].first;
            int nj = j + directions[k].second;

            if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj] && grid[ni][nj] == char((d + 1) + '0')) {
                q.push({ni, nj, d+1});
                visited[ni][nj] = true;
            }
        }
    }
    return counter;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TxtIO

    while (cin >> s) {
        grid.push_back(s);
    }

    n = grid.size();
    m = grid[0].size();

    vector<pair<int, int>> zeroes;

    forp(i, 0, n){
        forp(j, 0, m){
            if (grid[i][j] == '0') {
                zeroes.push_back({i, j});
            }
        }
    }

    ll ans = 0;
    for (auto zero : zeroes) {
        ans += bfs(zero.first, zero.second);
    }

    cout << ans << endl;
    
    return 0;
}