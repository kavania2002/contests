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
const int mod = 1e9 + 7;

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    veci arr(n);
    forp(i,0,n) cin >> arr[i];
    
    if (m == n || m == n-1) {
        cout << 0 << endl;
        return 0;
    }

    sort(all(arr));

    int result = INT_MAX;
    // forp(i,0,n) cout << arr[i] << ' ';
    // cout << endl;

    forp(i,0,n) {
        if (i+(n-m)-1 < n) {
            // cout << arr[i+(n-m)-1] << ' ' << arr[i] << endl;
            result = min(result, arr[i+(n-m)-1] - arr[i]);
        }
    }

    cout << result << endl;
}

/*
1 3 4 5 9
4

1 2 3 4 5 6 7 8

*/