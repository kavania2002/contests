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

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, W, D;
    cin >> H >> W >> D;
    vector<string> grid(H);

    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));
    queue<tuple<int, int, int>> q;

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == 'H') {
                q.push({i, j, 0});
                visited[i][j] = true;
            }
        }
    }

    int humidifiedCount = 0;

    while (!q.empty()) {
        auto [x, y, dist] = q.front();
        q.pop();
        ++humidifiedCount;

        if (dist < D) {
            for (int dir = 0; dir < 4; ++dir) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];

                if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && grid[nx][ny] != '#') {
                    visited[nx][ny] = true;
                    q.push({nx, ny, dist + 1});
                }
            }
        }
    }

    cout << humidifiedCount << endl;
    return 0;
}
