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
    ll n, m, k;
    cin >> n >> m >> k;

    veci arr(m), patahai(k);
    ll total = 0;
    forp(i, 0, m) cin >> arr[i];
    forp(i, 0, k) {
        cin >> patahai[i];
        total += patahai[i];
    }

    if (k < n-1) {
        forp(i,0,m) {
            cout << 0;
        }
        cout << endl;
        return;
    } else if (k == n) {
        forp(i,0,m) cout << 1;
        cout << endl;
        return;
    } 
    

    ll nahipata = (n*(n+1))/2 - total;
    forp(i,0,m) {
        (arr[i] == nahipata) ? cout << 1 : cout << 0;
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