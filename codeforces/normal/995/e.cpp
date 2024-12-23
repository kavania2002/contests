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
    int n, k;
    cin >> n >> k;

    veci a(n), b(n);
    set<int> prices;
    forp(i, 0, n) {
        cin >> a[i];
        prices.insert(a[i]);
    }
    forp(i, 0, n) {
        cin >> b[i];
        prices.insert(b[i]);
    }

    sort(all(a));
    sort(all(b));

    int result = 0;
    for (auto &price: prices) {
        // cout << lower_bound(all(a), price) - a.begin() << ' ' << lower_bound(all(b), price) - b.begin() << endl;
        int posCount = n - (lower_bound(all(a), price) - a.begin());
        int posPlusNegCount = n - (lower_bound(all(b), price) - b.begin());
        int negCount = posPlusNegCount - posCount;
        // cout << price << ' ' << posCount << ' ' << posPlusNegCount << endl;
        if (negCount <= k) {
            result = max(result, price * posPlusNegCount);
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
    while(t--){
        solve();
    }
    return 0;
}