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
    int n, x, y;
    cin >> n >> x >> y;

    int total = 0;
    veci arr(n); 
    forp(i,0,n) {
        cin >> arr[i];
        total += arr[i];
    }

    sort(all(arr));

    int result = 0;
    forp(i,0,n) {
        int num = arr[i];
        int l = upper_bound(arr.begin() + i, arr.end(), total - num - x) - arr.begin();
        int r = lower_bound(arr.begin() + i + 1, arr.end(), total - num - y) - arr.begin();
        if (l < r) continue;
        // cout << num << ' ' << l << ' ' << r << endl;
        result += (l - r);
    }

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