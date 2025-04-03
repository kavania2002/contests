#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    vector<int> result(n, 0);
    int middle = (n + 1)/2 - 1;
    result[middle] = n;

    int number = 2;
    for (int i = middle - 1; i >= 0; i--)
        result[i] = number, number += 2;
    number = 1;
    for (int i = middle + 1; i < n; i++)
        result[i] = number, number += 2;

    for (int i = 0; i < n; i++)
        cout << result[i] << ' ';

    return 0;
}