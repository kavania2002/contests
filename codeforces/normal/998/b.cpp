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
    int n, m;
    cin >> n >> m;

    vector<int> arr(n*m, 0);
    forp(i,0,n) {
        forp(j,0,m) {
            int x; cin >> x;
            arr[x] = i;
        }
    }

    // forp(i,0,n*m) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    vector<int> ans(n, -1);
    forp(i,0,n) {
        int index = arr[i];
        if (find(all(ans), index) != ans.end()) {
            cout << -1 << endl;
            return;
        }
        ans[i] = index;
    } 

    forp(i,n,n*m) {
        if (arr[i] != ans[i%n]) {
            cout << -1 << endl;
            return;
        }
    }

    forp(i,0,n) cout << ans[i] + 1 << " ";
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