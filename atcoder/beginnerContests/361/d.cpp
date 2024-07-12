#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <set>
#define int long long
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

int n;
int cts = 0;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    string s, t;
    cin >> s >> t;

    int bs = 0, ws = 0;
    forp(i,0,n) {
        if (s[i] == 'B') bs++;
        else ws++;

        if (t[i] == 'B') bs--;
        else ws--;
    }

    if (bs != 0 || ws != 0) {
        cout << -1 << endl;
        return 0;
    }

    s += "..";
    t += "..";

    queue<pair<string, int>> q;
    set<string> visited;
    q.push({s, 0});
    visited.insert(s);

    while (!q.empty()) {
        auto [currentSate, operations] = q.front();
        q.pop();

        // cout << currentSate << endl;
        if (currentSate == t) {
            cout << operations << endl;
            return 0;
        }

        int firstDot = currentSate.find('.');
        forp(i,0,n+1) {
            if (currentSate[i] != '.' && currentSate[i+1] != '.') {
                string temp(currentSate.begin(), currentSate.end());
                swap(temp[i], temp[firstDot]);
                swap(temp[i+1], temp[firstDot+1]);

                if (visited.find(temp) == visited.end()) {
                    visited.insert(temp);
                    q.push({temp, operations+1});
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}