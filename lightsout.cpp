#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/275/A
using namespace std;

int main()
{
    int b[5][5];
    memset(b, 1, sizeof(b));

    int a[5][5];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << '\n';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}