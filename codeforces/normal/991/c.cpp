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
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

bool recur(string &s, vector<vector<int>> &dp, int index, int rem) {
    if (index == s.size()) {
        return rem == 0;
    }

    if (dp[index][rem] != -1) {
        return dp[index][rem];
    }

    bool nosquare = recur(s, dp, index+1, (rem + s[index]-'0')%9);
    if (s[index] == '2' || s[index] == '3') {
        nosquare |= recur(s, dp, index+1, (rem + (s[index]-'0')*(s[index]-'0'))%9);
    }
    dp[index][rem] = nosquare;
    return nosquare;
}

void solve(){
    string s; cin >> s;
    int n = s.size();

    vector<vector<int>> dp(n+1, vector<int>(10, -1));
    if (recur(s, dp, 0, 0)) {
        YES;
    } else {
        NO;
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