#include <bits/stdc++.h>
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
    int a, b, c;
    cin >> a >> b >> c;

    int result = a*b*c;

    forp(i,0,6) {
        forp(j,0,6) {
            forp(k,0,6) {
                if (i + j + k == 5) {
                    // cout << i << ' ' << j << ' ' << k << endl;
                    result = max(result, ((i + a)*(j + b))*(k + c));
                }
            }
        }
    }

    cout << result << endl;
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