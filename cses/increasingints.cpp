#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long moves = 0, min = 0;

    for (long long i = 0; i < n-1; i++)
    { 
        for (long long j = i+1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                swap(arr[i], arr[j]);
                moves++;
            }
        }
    }

    cout << moves;
    return 0;
}