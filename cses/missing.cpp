#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long n;
    cin >> n;

    long arr[n-1];
    for (long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long res = 0;
    for (long i = 0; i < n; i++)
    {
        if (arr[i] != i+1)
        {
            res = i+1;
            break;
        }
    }
    cout << res;
    return 0;
}