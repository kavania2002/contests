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
    int n, m;
    cin >> n >> m;

    ll result = 0;
    vector<pair<int, int>> vp;
    forp(i,0,n) {
        int x, y;  cin >> x >> y;
        vp.push_back({x, y});
    }

    forp(i,1,n) {
        result += (2*vp[i].first + 2*vp[i].second);
    }

    result += (4*m);
    cout << result << endl;
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