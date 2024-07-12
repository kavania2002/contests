#include <bits/stdc++.h>
#include <iostream>
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    if (a < j && g < d && b < k && h < e && c < l && i < f) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}