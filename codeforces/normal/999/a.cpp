#include <bits/stdc++.h>
#define ll long long
#define float double
#define int long long
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

    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    int evens = 0, odds = 0;
    forp(i,0,n) {
        if(arr[i] % 2 == 0) evens++;
        else odds++;    
    }
    ll ans = (evens > 0);
    if (evens > 0) ans += odds;
    else {
        if (odds > 0) ans += odds - (evens == 0);
    }
    cout << ans << endl;
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