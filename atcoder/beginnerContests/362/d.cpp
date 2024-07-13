#include <bits/stdc++.h>
#include <iostream>
#define int long long
#define ll long long
#define float double
#define endl "\n"
#define forp(i, x, t) for (int i = x; i < t; i++)
#define forn(i, t) for (int i = t; i >= 0; i--)
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define veci vector<int>
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    veci nodeWeights(n+1, 0);
    forp(i,0,n) cin >> nodeWeights[i+1];

    unordered_map<int, unordered_map<int, int>> graph;
    forp(i,0,m) {
        int x, y, w;
        cin >> x >> y >> w;
        graph[x][y] = w;
        graph[y][x] = w;
    }

    set<pair<int, int>> st;
    vector<int> dist(n+1, INT64_MAX);

    st.insert({nodeWeights[1], 1});
    dist[1] = nodeWeights[1];

    while (!st.empty()) {
        auto it = *(st.begin());
        int distance = it.first, node = it.second;
        st.erase(it);

        for (auto &child: graph[node]) {
            int childNode = child.first;
            int edgeWeight = child.second;

            if (distance + edgeWeight + nodeWeights[childNode] < dist[childNode]) {
                if (dist[childNode] != INT_MAX) {
                    st.erase({dist[childNode], childNode});
                }

                dist[childNode] = distance + edgeWeight + nodeWeights[childNode];
                st.insert({dist[childNode], childNode});
            }
        }
    }

    forp(i,2,n+1) cout << dist[i] << ' ';
    cout << endl;

    return 0;
}