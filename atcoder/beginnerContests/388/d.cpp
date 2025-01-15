#include <bits/stdc++.h>
#define ll long long
#define float double
#define endl "\n"
#define TxtIO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    veci cum(n, 0), range(n+1, 0);
    forp(i,0,n) {
        if (i != 0) {
            cum[i] = cum[i-1] + range[i];
            arr[i] += cum[i];
        } 
        int cnt = min(n-i-1, arr[i]);
        arr[i] -= cnt;
        range[i + 1]++;
        range[min(n, i + cnt + 1)]--;
    }
    forp(i,0,n) cout << arr[i] << ' ';

    return 0;
}