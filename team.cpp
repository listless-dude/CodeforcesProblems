#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n][3];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    int sum = 0;
    vector<int> sums;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        sums.push_back(sum);
        sum = 0;
    }
    int count = 0;
    for (int i = 0; i < sums.size(); ++i)
    {
        if (sums[i] >= 2)
            count++;
    }
    cout << count;
    return 0;
}