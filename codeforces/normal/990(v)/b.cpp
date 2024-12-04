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
    string s; cin >> s;

    veci counter(26, 0);
    forp(i,0,n) counter[s[i] - 'a']++;

    vector<pair<int, int>> v;
    forp(i,0,26) {
        if (counter[i]) v.push_back({counter[i], i});
    }

    sort(rev(v));
    int first = v[0].second;
    int last = v[v.size()-1].second;

    // cout << first << " " << last << endl;

    for (int i = 0; i<n; i++) {
        if (s[i] - 'a' == last) {
            s[i] = char(first + 'a');
            break;
        }    
    }

    cout << s << endl;
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