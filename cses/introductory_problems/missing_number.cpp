#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int result = 0;
    for (int i = 1; i<n; i++) {
        int number; cin >> number;
        result ^= number;
        result ^= i;
    }
    result ^= n;

    cout << result << endl;

    return 0;
}