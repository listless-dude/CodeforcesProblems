#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mn = INT_MAX, mx = 0, minIndex = 0, maxIndex = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
            mx = max(arr[i], mx);
            mn = min(arr[i], mn);

            if (mx == arr[i])
                maxIndex = i;
            if (mn == arr[i])
                minIndex = i;
        }
    }

    
    
    return 0;
}