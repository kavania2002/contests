#include <bits/stdc++.h>
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

void solve(){
    int n, m;
    cin >> m >> n;

    veci arr(n);
    int total = 0;
    int ones = 0;
    forp(i,0,n) {
        cin >> arr[i];
        total += arr[i];
        if (arr[i] == 1) ones++;
    }

    sort(all(arr));

    if (ones == n) {
        cout << n-1 << endl;
        return;
    }

    total -= arr[n-1];

    forp(i,0,n-1) {
        total += (arr[i]-1);
    }

    cout << total << endl;
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