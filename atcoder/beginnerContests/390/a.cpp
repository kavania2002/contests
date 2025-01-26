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

    int n = 5;
    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    int count = 0;
    int index = 0;
    forp(i,0,n){
        if (arr[i] != i+1) count++, index = i;
    }

    if (count == 2) {
        if (index > 0 && arr[index-1] == index + 1) cout << "Yes" << endl;
        else if (index < n-1 && arr[index+1] == index + 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else cout << "No" << endl;
    return 0;
}