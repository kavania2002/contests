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

    int h, w, d;
    cin >> h >> w >> d;

    vector<vector<char>> grid(h, vector<char>(w));
    vector<pair<int, int>> floors;
    forp(i,0,h) {
        forp(j,0,w) {
            cin >> grid[i][j];
            if (grid[i][j] == '.') {
                floors.push_back({i, j});
            }
        }
    }

    int n = floors.size();
    int result = 0;
    forp(i,0,n) {
        forp(j,i+1,n) {

            int firstX = floors[i].first, firstY = floors[i].second;
            int secondX = floors[j].first, secondY = floors[j].second;
            int counter = 0;

            forp(a, 0, n) {
                int thirdX = floors[a].first, thirdY = floors[a].second;

                if (abs(thirdX - firstX) + abs(thirdY - firstY) <= d || abs(thirdX - secondX) + abs(thirdY - secondY) <= d) {
                    counter++;
                }
            }

            result = max(result, counter);
        }
    }

    cout << result << endl;

    return 0;
}