#include <bits/stdc++.h>

using namespace std;

bool nice(int arr[], int size)
{
    vector<int> abso;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            abso.push_back(abs(arr[i]-arr[j]));
        }
    }
    
    for (int i = 0; i < abso.size(); i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (abso[i] != arr[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     int n;
    //     cin >> n;

    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }

    //     int b[300];
    // }

    int b[3] = {0, 3, 9};
    int size = sizeof(b)/sizeof(b[0]);

    nice(b, size) ? cout << "yes" : cout << "no";
    
    return 0;
}