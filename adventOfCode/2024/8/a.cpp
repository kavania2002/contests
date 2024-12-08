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

vector<pair<int, int>> directions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
vector<char> dir = {'U', 'R', 'D', 'L'};
set<pair<int, int>> marked;

int n, m;
vecs grid;

string bfs(int x1, int y1, int &x2, int &y2) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    queue<pair<pair<int, int>, string>> q;
    q.push({{x1, y1}, ""});

    while (!q.empty()) {
        auto [coord, path] = q.front();
        q.pop();
        int x = coord.first, y = coord.second;

        if (x == x2 && y == y2) {
            return path;
        }

        for (int i = 0; i<4; i++) {
            int newX = x + directions[i].first;
            int newY = y + directions[i].second;

            if (newX >= 0 && newX < n && newY >= 0 && newY < m && !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({{newX, newY}, path + dir[i]});
            }
        }
    }

    return "-1";
}

void markPosition(string &path, int x, int y) {
    int pathSize = path.size();
    for (int i = pathSize-1; i>=0; i--) {
        if (path[i] == 'U') {
            x--;
        } else if (path[i] == 'D') {
            x++;
        } else if (path[i] == 'L') {
            y--;
        } else if (path[i] == 'R') {
            y++;
        }
    }
    if (x >= 0 && x < n && y >= 0 && y < m)
        marked.insert({x, y});
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    TxtIO

    string s;
    while (cin >> s) {
        grid.push_back(s);   
    }

    n = grid.size(), m = grid[0].size();

    unordered_map<char, vector<pair<int, int>>> coordsMap;
    forp(i,0,grid.size()) {
        forp(j,0,grid[i].size()) {
            if (grid[i][j] == '.' || grid[i][j] == '#') continue;
            coordsMap[grid[i][j]].push_back({i, j});
        }
    }

    for (auto [key, coords] : coordsMap) {
        for (int i = 0; i<coords.size(); i++) {
            for (int j = 0; j<coords.size(); j++) {
                if (i == j) continue;
                int x1 = coords[i].first, y1 = coords[i].second;
                int x2 = coords[j].first, y2 = coords[j].second;
                string path = bfs(x1, y1, x2, y2);
                markPosition(path, x2, y2);
            }
        }
    }

    cout << marked.size() << endl;

    return 0;
}