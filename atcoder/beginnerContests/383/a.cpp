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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int current = 0;
    vector<pair<int, int>> vp;
    forp(i,0,n) {
        int t, v;
        cin >> t >> v;
        vp.push_back({t, v});
    }
    
    current += vp[0].second;
    forp(i,1,n) {
        current -= vp[i].first - vp[i-1].first;
        current = max(0, current);
        current += vp[i].second;
    }

    cout << current << endl;

    return 0;
}