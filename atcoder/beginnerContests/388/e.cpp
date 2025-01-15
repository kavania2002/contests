#include <bits/stdc++.h>
#define ll long long
#define int long long
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

bool isPossible(veci &arr, int &k) {
    int n = arr.size();
    int index = n - k;
    forp(i,0,k) {
        if (arr[i] > arr[index]/2) return false;
        index++;
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    veci arr(n);
    forp(i,0,n) cin >> arr[i];

    int count = 0;
    int i = 0, j = n/2;
    while (i < n  && j < n) {
        if (arr[i] > arr[j]/2) j++;
        else {
            count++;
            i++;
            j++;
        }
    }
    cout << count;

    return 0;
}