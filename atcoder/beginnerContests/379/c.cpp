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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    int m;
    cin >> n >> m;

    vector<pair<int, ll>> vp(m);
    forp(i, 0, m)
    {
        cin >> vp[i].first;
    }
    forp(i, 0, m)
    {
        cin >> vp[i].second;
    }

    sort(all(vp));

    ll extras = 0, currentSum = 0;
    for (auto &x : vp)
    {
        if (extras < x.first - 1)
        {
            cout << -1 << endl;
            return 0;
        }
        extras += x.second;
        currentSum += (x.first * x.second);
    }

    if (extras != n)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << (n * (n + 1) / 2) - currentSum << endl;

    return 0;
}