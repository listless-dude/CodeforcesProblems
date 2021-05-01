#include <bits/stdc++.h>
// https://codeforces.com/contest/344/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    string arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != arr[i+1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}