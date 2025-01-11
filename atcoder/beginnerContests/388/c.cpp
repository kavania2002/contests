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

int binary_search_half(veci &arr, int &x) {
    int l = 0, r = arr.size();
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid]/2 >= x) r = mid;
        else l = mid + 1;
    }
    return r;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    veci arr(n);

    forp(i,0,n) cin >> arr[i];

    ll result = 0;
    forp(i,0,n) {
        int x = arr[i];
        int index = binary_search_half(arr, x);
        // cout << arr[i] << ' ' << n - index << endl;
        result += (n - index);
    }
    cout << result << endl;

    return 0;
}