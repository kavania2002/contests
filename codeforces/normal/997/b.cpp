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

void solve(){
    int n; cin >> n;
 
    vector<string> graph(n);
    forp(i,0,n) cin >> graph[i];
 
    map<int, vector<int>> mp;
    forp(i,0,n) {
        int count = 0;
        forp(j,0,n) {
            if(graph[i][j] == '1') count++;
        }
        mp[count].pb(i);
    }
    
    for (auto &x: mp) {
        if (x.second.size() == 1) {
            cout << x.second[0] + 1 << " ";
        } else {
            sort(all(x.second), [&](int a, int b) {
                if (a < b) return graph[a][b] == '1';
                return graph[b][a] == '0';
            });
            for (int &y: x.second) cout << y + 1 << " ";
        }
    }
    cout << endl;
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