#include <bits/stdc++.h>
#define ll long long
#define int long long
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

void solve(){
    int n, k;
    cin >> n >> k;

    veci a(n);
    forp(i,0,n) cin >> a[i];
    sort(rev(a));

    int ans = INT_MAX;
    int current = 0;
    forp(i,0,n) {
        current += a[i];
        if (current <= k)
            ans = min(ans, k - current);
        else break;
    }

    if (ans == INT_MAX) cout << 0 << endl;
    else
        cout << ans << endl;

}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}