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

string get_xor(string &a, int &l, int &r) {
    int n = a.size();

    string result = a;
    int i = n-1, j = r;
    while (i >= 0 && j >= l) {
        if (a[i] == a[j]) {
            result[i] = '0';
        } else {
            result[i] = '1';
        }
        i--;
        j--;
    } 

    while (i >= 0) {
        result[i] = a[i];
        i--;
    }

    return result;
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();

    int first_zero = -1;
    forp(i,0,n) {
        if (s[i] == '0') {
            first_zero = i;
            break;
        }
    }

    if (first_zero == -1) {
        printf("1 1 1 %d\n", n);
        return;
    }
    
    
    int length = n - first_zero;
    int l = 0, r = length - 1;
    string max_current = get_xor(s, l, r);

    int ans_l = l, ans_r = r;
    while (r < n) {
        string xor_result = get_xor(s, l, r);
        if (max_current < xor_result) {
            max_current = xor_result;
            ans_l = l;
            ans_r = r;
        }
        l++;
        r++;
    }

    string xor_result = get_xor(s, l, r);
    if (max_current < xor_result) {
        max_current = xor_result;
        ans_l = l;
        ans_r = r;
    }

    printf("%d %d %d %d\n", ans_l + 1, ans_r + 1, 1, n);
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