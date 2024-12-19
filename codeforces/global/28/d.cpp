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
#define YES cout << "Yes\n";
#define NO cout << "No\n";
#define pb(x) push_back(x)
const int mod = 1e9 + 7;

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    veci ratings(n), diff(m);
    forp(i,0,n) cin >> ratings[i];
    forp(i,0,m) cin >> diff[i];

    int kevin_rating = ratings[0];
    sort(all(ratings));
    sort(all(diff));

    vector<int> kevin_rankings;
    int kevin_index = lower_bound(all(ratings), kevin_rating) - ratings.begin();

    forp(i,0,m) {
        int index = lower_bound(all(ratings), diff[i]) - ratings.begin();
        if (index <= kevin_index) kevin_rankings.pb(1);
        else kevin_rankings.pb(n-index+1);
    }

    sort(all(kevin_rankings));

    forp(i,1,m+1) {
        int value = m/i;
        int start = i-1;

        int total = 0;
        forp(j,0,value) {
            total += kevin_rankings[start];
            start += i;
        }
        cout << total << ' ';
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