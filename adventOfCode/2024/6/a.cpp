#include <bits/stdc++.h>
#define int long long
#define ll long long
#define float double
#define endl "\n"
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define forp(i, x, t) for (ll i = x; i < t; i++)
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

bool isValid(ll &x, ll &y, ll &n, ll &m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TxtIO

    string s;
    vector<string> grid;
    while (cin >> s) {
        grid.push_back(s);
        
    }

    ll n = grid.size(), m = grid[0].size();
    ll startX, startY;
    forp(i,0,n) {
        forp(j,0,m) {
            if (grid[i][j] == '^') {
                startX = i;
                startY = j;
                break;
            }
        }
    }

    vector<pair<int, int>> directions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    int direction = 0;
    grid[startX][startY] = 'X';
    while (startX >= 0 && startX < n && startY >= 0 && startY < m) {
        
        int newX = startX + directions[direction].first;
        int newY = startY + directions[direction].second;

        if (!isValid(newX, newY, n, m)) break;

        if (isValid(newX, newY, n, m) && grid[newX][newY] != '#') {
            startX = newX;
            startY = newY;
            grid[startX][startY] = 'X';
        } else {
            direction = (direction + 1) % 4;
        }
    }

    ll visited = 0;
    forp(i,0,n) {
        forp(j,0,m) {
            if (grid[i][j] == 'X') {
                visited++;
            }
        }
    }

    cout << visited << endl;
    
    return 0;
}