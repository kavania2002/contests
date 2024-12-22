#include <bits/stdc++.h>
#define ll long long
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

map<char, pair<int, int>> directions = {
    {'U', {-1, 0}},
    {'D', {1, 0}},
    {'L', {0, -1}},
    {'R', {0, 1}}
};

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<vector<char>> grid(n, vector<char>(m));
    forp (i,0,n) forp (j,0,m) cin >> grid[i][j];


    string path; cin >> path;
    x--, y--;

    int ans = 0;
    forp (i,0,path.size()){
        int xi = x + directions[path[i]].first, yi = y + directions[path[i]].second;
        if (xi < 0 || xi >= n || yi < 0 || yi >= m || grid[xi][yi] == '#') continue;
        if (grid[xi][yi] == '@') {
            ans++;
            grid[xi][yi] = '.';
        }
        x = xi, y = yi;
    }

    cout << x + 1 << ' ' << y + 1 << ' ' << ans << endl;
    
    return 0;
}