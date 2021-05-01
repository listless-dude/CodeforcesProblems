#include <bits/stdc++.h>
// http://codeforces.com/contest/677/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, h;

    cin >> n >> h;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= h)
            sum++;
        else
            sum+=2;

    }

    cout << sum;
    return 0;
}