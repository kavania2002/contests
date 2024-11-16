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

    int q;
    cin >> q;

    vector<ll> cummulativeHeight(q+1);
    cummulativeHeight[0] = 0;
    queue<int> indexes;

    forp(i,0,q) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            cummulativeHeight[i+1] = cummulativeHeight[i];
            indexes.push(i);
        } else if (queryType == 2) {
            ll t; cin >> t;
            cummulativeHeight[i+1] = cummulativeHeight[i] + t; 
        } else {
            ll t; cin >> t;
            cummulativeHeight[i+1] = cummulativeHeight[i];

            int ans = 0;
            while (!indexes.empty() && cummulativeHeight[i+1] - cummulativeHeight[indexes.front()] >= t) {
                ans++;
                indexes.pop();
            }
            cout << ans << endl;
        }
    }

    return 0;
}