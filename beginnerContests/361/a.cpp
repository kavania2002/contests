#include <bits/stdc++.h>
#include <iostream>
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

    int n, k, x;
    cin >> n >> k >> x;

    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    int index = 0; int i = 0;
    veci result;
    while (index < n+1) {
        if (index == k) {
            result.pb(x); 
        } else {
            result.pb(arr[i++]);
        }
        index++;
    }

    forp(i,0,n+1) {
        cout << result[i] << ' ';
    }
    cout << endl;

    return 0;
}