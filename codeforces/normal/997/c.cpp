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

    veci arr(n);
    arr[0] = 1;
    arr[1] = 1;
    arr[n-1] = 2;
    arr[n-2] = 1;
    arr[n-4] = 2;    

    int index = 2;
    while (index < n-4) arr[index] = index+1, index++;
    arr[n-3] = index + 1;

    forp(i,0,n) cout << arr[i] << ' ';
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