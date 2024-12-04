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

    vector<veci> mat(2, veci(n));
    forp(i,0,2) forp(j,0,n) cin >> mat[i][j];

    ll result = 0;
    int toBeAdded = INT_MIN;

    forp(i,0,n) {
        if (mat[0][i] > mat[1][i]) result += mat[0][i];
        else result += mat[1][i];
        toBeAdded = max(toBeAdded, min(mat[0][i],mat[1][i]));
    }

    result += toBeAdded;
    cout << result << endl;
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