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
    vecs arr(n); forp(i, 0, n) cin >> arr[i];

    veci l(n, 0), r(n, n-1);
    veci ans(n);
    forp(i,0,n) {
        int cnt = 0;
        forp(j,0,n) if (l[i] == l[j] && r[i] == r[j] && arr[i][j] == '1') cnt++;

        int pos = r[i] - cnt;
        ans[pos] = i + 1;

        forp(j,0,n) {
            if (l[i] == l[j] && r[i] == r[j] && i != j) {
                if (arr[i][j] == '0') r[j] = pos - 1;
                else l[j] = pos + 1;
            }
        }
        l[i] = r[i] = pos;
    }
    forp(i,0,n) cout << ans[i] << " ";
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