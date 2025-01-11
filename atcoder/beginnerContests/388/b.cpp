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

    int n, d;
    cin >> n >> d;

    vector<pair<int, int>> v(n);
    forp(i,0,n) {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    forp(i,1,d+1) {
        int maxi = 0;
        forp(j,0,n) {
            maxi = max(maxi, v[j].first * (i + v[j].second));
        }
        cout << maxi << endl;
    }
    return 0;
}