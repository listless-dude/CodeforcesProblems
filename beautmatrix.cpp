#include <bits/stdc++.h>
// http://codeforces.com/contest/263/problem/A
using namespace std;

int main()
{
    int a[5][5];

    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j] == 1)
            {
                cout << abs(i-2) + abs(j-2) << endl;
            }
        }
    }
    
    return 0;
}