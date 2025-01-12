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
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

void solve(){
    int n;
    cin >> n;

    veci a(n), b(n);
    int sa = 0, sb = 0;
    forp(i,0,n) {
        cin >> a[i];
        sa += a[i];
    }

    forp(i,0,n) {
        cin >> b[i];
        sb += b[i];
    }

    if (sa < sb) {
        NO
        return;
    }

    if (n == 2) {
        if (sa >= sb) {
            YES
        } else {
            NO
        }
        return;
    }

    if (sa == sb) {
        forp(i,0,n) {
            if (b[i] > a[i]) {
                NO
                return;
            }
        }
        YES
        return;
    }

    int diff_cnt = 0;
    int kitna_change = 0, konsa_change = -1;
    forp(i,0,n) {
        if (b[i] > a[i]) {
            diff_cnt++;
            kitna_change += b[i] - a[i];
            konsa_change = i;
        }
    }

    if (diff_cnt > 1) {
        NO
        return;
    }

    if (diff_cnt == 0) {
        YES
        return;
    }


    forp(i,0,n) {
        if (i != konsa_change) {
            if (a[i] - b[i] < kitna_change) {
                NO
                return;
            }
        }
    }
    YES
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