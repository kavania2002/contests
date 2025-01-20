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

void dfs(int node, int current, vector<int> &con, vector<vector<int>> &adj) {
    con[node] = current;
    for (int child : adj[node]) {
        if (con[child] == -1) {
            dfs(child, current, con, adj);
        }
    }
}

void solve(){
    int n, m1, m2;
    cin >> n >> m1 >> m2;

    vector<vector<int>> adj1(n+1), adj2(n+1);
    vector<pair<int, int>> edges1;
    forp(i,0,m1) {
        int u, v;
        cin >> u >> v;
        edges1.push_back({u, v});
    }

    forp(i,0,m2) {
        int u, v;
        cin >> u >> v;
        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }

    vector<int> conG(n+1, -1), conH(n+1, -1);

    int currentG = 0;
    forp(i,1,n+1) {
        if (conG[i] == -1) {
            dfs(i, currentG, conG, adj2);
            currentG++;
        }
    }

    ll ans = 0;
    for (auto &edge: edges1) {
        int u = edge.first, v = edge.second;
        if (conG[u] != conG[v] && conG[u] != -1 && conG[v] != -1) {
            ans++;
        } else {
            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }
    }

    int currentH = 0;
    forp(i,1,n+1) {
        if (conH[i] == -1) {
            dfs(i, currentH, conH, adj1);
            currentH++;
        }
    }

    cout << ans + (currentH - currentG) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}