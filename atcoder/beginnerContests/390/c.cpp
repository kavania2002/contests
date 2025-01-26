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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int h, w;
    cin >> h >> w;

    vector<string> grid(h);
    forp(i,0,h) cin >> grid[i];

    int rMin = 1001, rMax = 0, cMin = 1001, cMax = 0;
    forp(i,0,h) {
        forp(j,0,w) {
            if (grid[i][j] == '#') {
                rMin = min(rMin, i);
                rMax = max(rMax, i);
                cMin = min(cMin, j);
                cMax = max(cMax, j);
            }
        }
    }

    forp(i,rMin, rMax+1) {
        forp(j,cMin, cMax+1) {
            if (grid[i][j] == '.') {
                NO
                return 0;
            }
        }
    }

    YES
    return 0;
}