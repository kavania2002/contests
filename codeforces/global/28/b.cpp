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

    veci arr(n, -1);
    int number = 1, lIndex = k - 1, rIndex = n - k ;

    while (lIndex < n && rIndex >= 0) {
        if (arr[lIndex] == -1) {
            arr[lIndex] = number++;
        }
        if (arr[rIndex] == -1) {
            arr[rIndex] = number++;
        }
        lIndex += k;
        rIndex -= k;
    }

    while (lIndex < n) {
        if (arr[lIndex] == -1) {
            arr[lIndex] = number++;
        }
        lIndex += k;
    }

    while (rIndex >= 0) {
        if (arr[rIndex] == -1) {
            arr[rIndex] = number++;
        }
        rIndex -= k;
    }

    forp(i,0,n) {
        if (arr[i] == -1) {
            arr[i] = number++;
        }
    }

    forp(i,0, n) {
        cout << arr[i] << " ";
    }
    cout << endl;
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