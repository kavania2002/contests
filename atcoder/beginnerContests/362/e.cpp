#include <bits/stdc++.h>
#include <iostream>
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
const int mod = 998244353;

using namespace std;

vector<vector<vector<int>>> dp;

int helper(veci &arr, int i, int j, int length) {
    if (length == 2) return 1;

    if (dp[i][j][length] != -1) return dp[i][j][length];

    int result = 0;
    for (int k = j+1; k<arr.size(); k++) {
        if (arr[k] - arr[j] == arr[j] - arr[i]) {
            result = (result + helper(arr, j, k, length-1))%mod;
        }
    }

    return dp[i][j][length] = result;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    dp.resize(n+1, vector<vector<int>>(n+1, vector<int>(n+1, -1)));

    veci result(n, 0);
    result[0] = n;

    forp(i,0,n) {
        forp(j,i+1,n) {
            forp(length, 2, n+1) {
                result[length-1] = (result[length-1] + helper(arr, i, j, length))%mod;
            }
        }
    }

    forp(i,0,n) cout << result[i] << ' ';

    return 0;
}