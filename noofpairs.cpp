#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, l, r;
    cin >> n >> l >> r;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        
            if ((arr[i] + arr[j]) >= l && (arr[i] + arr[j]) <= r)
            {
                count++;
            }
        
    }
    cout << count << '\n';
    }
    return 0;
}