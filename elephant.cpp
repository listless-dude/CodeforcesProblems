#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[5] = {1, 2, 3, 4, 5};

    int x;
    cin >> x;

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (x == arr[i])
        {
            cout << 1;
            break;
        }
        else
        {
            x = x % arr[i];
        }
    }
    return 0;
}