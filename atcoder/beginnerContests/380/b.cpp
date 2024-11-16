#include <bits/stdc++.h>
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n;
    cin >> n;

    int counter = 0;
    veci arr;

    forp(i,1,n.size()) {
        if (n[i] == '|') {
            arr.pb(counter);
            counter = 0;
        }
        else {
            counter++;
        }
    }

    forp(i,0,arr.size()) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}