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
#define vecs vector<string>
#define YES cout << "Yes\n";
#define NO cout << "No\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    vector<vector<int>> grid(n, vector<int>(m));
    veci row_sum(n), col_sum(m);
    forp(i,0,n) {
        forp(j,0,m) {
            cin >> grid[i][j];
            row_sum[i] += grid[i][j];
            col_sum[j] += grid[i][j];
        }
    }

    int l = 0, r = 0;
    forp(i,0,s.size()) {
        if (s[i] == 'D') {
            grid[l][r] = -row_sum[l];
            row_sum[l] = 0;
            col_sum[r] += grid[l][r];
            l++;
        } else {
            grid[l][r] = -col_sum[r];
            col_sum[r] = 0;
            row_sum[l] += grid[l][r];
            r++;
        }
    }

    grid[n-1][m-1] = -row_sum[n-1];
    forp(i,0,n) {
        forp(j,0,m) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
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