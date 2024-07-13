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

double distance(int a, int b, int c, int d) {
    // cout << pow(c-a, 2) + pow(d-b, 2) << endl;
    return sqrt(double(pow(c-a, 2) + pow(d-b, 2)));
}

bool helper(double a, double b, double c) {
    double total = pow(a, 2) + pow(b, 2);
    if (sqrt(total) == c) return true;
    return false;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double a = distance(xa, ya, xb, yb);
    double b = distance(xa, ya, xc, yc);
    double c = distance(xc, yc, xb, yb);

    // cout << a <<  ' ' <<  b <<  ' ' << c << endl;

    if (helper(a, b, c)) {
        cout << "Yes";
    } else if (helper(a, c, b)) {
        cout << "Yes";
    } else if (helper(b, c, a)) {
        cout << "Yes";
    } else {
        cout << "No";
    }


    return 0;
}