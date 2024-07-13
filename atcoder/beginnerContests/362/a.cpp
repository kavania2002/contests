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

    int r, g, b;
    cin >> r >> g >> b;

    string s;
    cin >> s;

    if (s == "Blue") cout << min(r, g);
    else if (s == "Red") cout << min(g, b);
    else if (s == "Green") cout << min(r, b);

    return 0;
}