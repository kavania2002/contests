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
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

int helper(string &s, int index, int &n, int m, int k, vector<int>& dp) {
    if (index >= n) return 0;

    if (dp[index] != -1) return dp[index];
    if (s[index] == 'C') return INT_MAX;
    if (s[index] == 'W') return dp[index] = 1 + helper(s, index+1, n, m, k, dp);

    int result = INT_MAX;
    forp(i,1,m+1) {
        result = min(result, helper(s, index+i, n, m, k, dp));
    }
    return dp[index] = result;
}

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    s = "L" + s;
    n++;

    veci dp(n+1, -1);
    int steps = helper(s, 0, n, m, k, dp);
    if (steps <= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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