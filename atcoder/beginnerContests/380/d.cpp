#include <bits/stdc++.h>
#define ll long long
#define int long long
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int n;
    cin >> n;
    
    veci arr(n);
    forp(i,0,n) cin >> arr[i];
    int len = s.size();

    forp(i,0,n) {
        int k = arr[i];
        int current = len;
        bool toFlip = false;

        while (current < k) current *= 2;

        while (current > len) {
            if (k > current/2) {
                k -= current/2;
                toFlip = !toFlip;
            }
            current /= 2;
        }   

        if (toFlip) {
            cout << char(s[k-1]^32) << ' ';
        } else {
            cout << s[k-1] << ' ';
        }
    }

    return 0;
}