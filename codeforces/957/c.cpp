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
    int n, m, k;
    cin >> n >> m >> k;

    veci arr;
    int number = n;
    while (number>m) {
        arr.pb(number--);
    } 

    forp(i,1,m+1) arr.pb(i);

    forp(i,0,n) cout << arr[i] << ' ';
    cout << endl;

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