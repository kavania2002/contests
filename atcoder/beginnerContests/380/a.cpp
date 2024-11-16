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

    string n;
    cin >> n;

    int one = 0, two = 0, three = 0;
    forp(i,0,6) {
        if (n[i] == '1') one++;
        else if (n[i] == '2') two++;
        else if (n[i] == '3') three++;
    }

    if (one == 1 && two == 2 && three == 3) {
        cout << "Yes" << endl;
        return 0;
    } else {
        cout << "No" << endl;

    }

    return 0;
}