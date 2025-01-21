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

    vector<pair<int, ll>> q;
    int Q; cin >> Q;
    ll negs = 0;  
    int front = 0;  
    
    forp(i, 0, Q) {
        int x; cin >> x;  
        
        if (x == 1) {  
            int y; cin >> y;  
            if (q.empty()) 
                q.push_back({y, 0});  
            else
                q.push_back({y, q.back().second + q.back().first});  
        } 
        else if (x == 2) {  
            negs += q[front].first;  
            front++;  
        } 
        else if (x == 3) {  
            int y; cin >> y;  
            cout << q[front + y - 1].second - negs << endl;  
        }
    }

    return 0;
}