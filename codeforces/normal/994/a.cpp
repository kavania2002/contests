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
    int n;
    cin >> n;
    veci arr(n); 
    int zeroes = 0;
    forp(i,0,n) {
        cin >> arr[i];
        if(arr[i] == 0) zeroes++;
    }

    if (zeroes == n) {
        cout << 0 << endl;
        return;
    }

    if (zeroes == 0) {
        cout << 1 << endl;
        return;
    }

    // find non zero contigous subarray
    int index = 0;
    while (index < n && arr[index] == 0) index++;
    while (index < n && arr[index] != 0) index++;
    while (index < n && arr[index] == 0) index++;
    index == n ? cout << 1 << endl : cout << 2 << endl;
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