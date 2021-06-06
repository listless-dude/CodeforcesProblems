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
        int arr[4];
        int tmp[4];
        memset(tmp, 0, sizeof(tmp));
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            tmp[i] = arr[i];
        }
        sort(tmp, tmp + 4);
        int max = tmp[3], secMax = tmp[2];

        if ((arr[0] == max && arr[1] == secMax) || (arr[1] == max && arr[0] == secMax) || (arr[2] == max && arr[3] == secMax) || (arr[3] == max && arr[2] == secMax))
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    
    return 0;
}