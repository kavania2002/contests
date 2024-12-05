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

int recur(string &a, string &b, string &c, int i, int j, vector<vector<int>> &dp) {
    if (i == a.size() && j == b.size()) return 0;
    if (dp[i][j] != -1) return dp[i][j];

    int pos = i + j;
    int res = 1e9;
    if (i<a.size()) {
        res = min(res, recur(a, b, c, i+1, j, dp) + (a[i] != c[pos]));
    }
    if (j<b.size()) {
        res = min(res, recur(a, b, c, i, j+1, dp) + (b[j] != c[pos]));
    }
    return dp[i][j] = res;
}

void solve(){
    string a, b, c;
    cin >> a >> b >> c;
    vector<vector<int>> dp(a.size()+1, vector<int>(b.size()+1, -1));
    cout << recur(a, b, c, 0, 0, dp) << endl;
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