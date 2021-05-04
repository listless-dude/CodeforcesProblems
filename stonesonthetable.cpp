#include <bits/stdc++.h>
// http://codeforces.com/contest/266/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string color;
    cin >> color;

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (color[i] == color[i+1])
        {
            count++;
        }
    }
        cout << count;
    return 0;
}