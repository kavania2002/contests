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
#define vecs vector<string>
#define YES cout << "Yes\n";
#define NO cout << "No\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

void solve(){
    int n, d;
    cin >> n >> d;

    veci arr;
    arr.pb(1);

    if (n >= 3 || d == 3 || d == 6 || d == 9) arr.pb(3);
    if (d == 5) arr.pb(5); 
    if (n >= 3 || d == 7) arr.pb(7);

    if (n>=6 || d == 9) arr.pb(9);
    else {
        int count = 0;
        if (n >= 3 && d%3 == 0) arr.pb(9);
    }
    
    forp(i,0,arr.size()) cout << arr[i] << " ";
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