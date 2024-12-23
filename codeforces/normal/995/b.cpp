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
#define vecs vector<string>
#define YES cout << "Yes\n";
#define NO cout << "No\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int total = a + b + c;
    int remainder = n%total;
    if (remainder == 0) {
        cout << (n/total)*3 << endl;
    } else {
        int multi = n/total;
        int current = multi*total;
        if (current + a >= n) {
            cout << multi*3 + 1 << endl;
        } else if (current + a + b >= n) {
            cout << multi*3 + 2 << endl;
        } else {
            cout << multi*3 + 3 << endl;
        }
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