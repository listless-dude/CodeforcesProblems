#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // code
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr, arr+2*n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ' << arr[i+n] << ' ';
        }
        cout << '\n';
    }
    return 0;
}