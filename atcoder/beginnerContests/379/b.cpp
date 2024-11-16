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

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int current = 0;
    int result = 0;
    forp(i,0,n) {
        if (s[i] == 'O') {
            current++;
            // cout << current << endl;
        }
        else {
            result += (current/k);
            current = 0;
        }
    }

    result += (current/k);
    cout << result << endl;

    return 0;
}