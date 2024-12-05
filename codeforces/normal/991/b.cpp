#include <bits/stdc++.h>
#define int long long
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
    int odd_places = 0, even_places = 0;
    forp(i,0,n) {
        cin >> arr[i];
        if (i%2) {
            odd_places += arr[i];
        } else {
            even_places += arr[i];
        }
    }

    if ((even_places+odd_places)%n != 0) {
        NO;
        return;
    }

    int target = (even_places+odd_places)/n;
    int even_req = target * ((n+1)/2), odd_req = target * (n/2);
    if (even_req == even_places && odd_req == odd_places) {
        YES;
    } else {
        NO;
    }
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