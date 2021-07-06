#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (n > 0)
        {
            n -= arr[i];
            count++;
        }
    }
    
    cout << count;
    return 0;
}