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
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> mp;
    veci arr(n); 
    forp(i,0,n) cin >> arr[i], mp[arr[i]]++;

    sort(all(arr));
    ll count = 0;
    forp(i,0,n) {
        if (mp[arr[i]] == 0) continue;
        if (mp[k-arr[i]] > 0) {
            if (arr[i] == k-arr[i]) {
                if (mp[arr[i]] > 1) {
                    count++;
                    // cout << arr[i] << " " << k-arr[i] << endl;
                    mp[arr[i]] -= 2;
                }
            } else {
                count++;
                // cout << arr[i] << " " << k-arr[i] << endl;
                mp[arr[i]]--;
                mp[k-arr[i]]--;
            }
        }
    }

    cout << count << endl;
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