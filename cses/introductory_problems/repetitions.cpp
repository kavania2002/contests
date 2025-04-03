#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    char prev = '1';
    int longest = 0, current = 0;

    for (char &c: s) {
        if (c == prev) {
            current++;
            continue;
        }

        longest = max(longest, current);
        current = 1;
        prev = c;
    }
    longest = max(longest, current);

    cout << longest << endl;

    return 0;
}