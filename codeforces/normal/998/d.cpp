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
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

void solve(){
    int n; cin >> n;
    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    forp(i,1,n) {
        if (arr[i] < arr[i-1]) {
            NO
            return;
        }
        arr[i] -= arr[i-1];
        arr[i-1] = 0;
    }

    forp(i,1,n) {
        if (arr[i] < 0) {
            NO
            return;
        }
    }
    YES
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