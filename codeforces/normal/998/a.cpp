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
    veci arr(4);
    forp(i,0,4) cin >> arr[i];

    int ans = 0;
    forp(i,-300,300) {
        int count = 0;
        if (arr[0] + arr[1] == i) count++;
        if (arr[1] + i == arr[2]) count++;
        if (i + arr[2] == arr[3]) count++;
        ans = max(ans, count);
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