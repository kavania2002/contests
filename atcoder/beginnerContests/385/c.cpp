#include <bits/stdc++.h>
#define ll long long
#define int long long
#define float double
#define endl "\n"
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
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

int solve(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return n;

    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    unordered_map<int, unordered_map<int, int>> dp;
    int maxLength = 1;

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < j; ++i) {
            int d = sortedArr[j] - sortedArr[i];
            dp[j][d] = dp[i][d] + 1;
            maxLength = max(maxLength, dp[j][d]);
        }
    }

    return maxLength + 1;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    veci arr(n);
    unordered_map<int, veci> freq;
    forp (i,0,n) {
        cin >> arr[i];
        freq[arr[i]].pb(i);
    }

    int ans = 0;
    for (auto [_, indices] : freq) {
        ans = max(ans, solve(indices));
    }

    cout << ans << endl;

    return 0;
}