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
    map<int, int> freq;

    int n; cin >> n;
    veci arr(n);
    vector<int> pairs;
    forp(i,0,n) {
        cin >> arr[i];
        freq[arr[i]]++;
        if (freq[arr[i]] % 2 == 0) {
            pairs.pb(arr[i]);
        }
    }

    if (pairs.empty()) {
        cout << -1 << endl;
        return;
    }
    if (pairs.size() > 1) {
        cout << pairs[0] << ' ' << pairs[0] << ' ' << pairs[1] << ' ' << pairs[1] << endl;
        return;
    }

    sort(all(arr));

    int c = pairs[0];
    int dup_count = 2;
    veci remains;
    forp(i,0,n) {
        if (arr[i] == c && dup_count > 0) {
            dup_count--;
        } else {
            remains.pb(arr[i]);
        }
    }

    int m = remains.size();
    forp(i,0,m-1) {
        if (remains[i+1] < remains[i] + 2*c) {
            cout << c << ' ' << c << ' ' << remains[i] << ' ' << remains[i+1] << endl;
            return;
        }
    }
    cout << -1 << endl;
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