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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 1; i < n-1; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if (arr[i][j] == 'R' && arr[i][j-1] == '.' 
                    && arr[i+1][j] == '.' && arr[i][j+1] == '.' 
                    && arr[i-1][j] == '.')
                {
                    arr[i][j-1] = arr[i+1][j] = arr[i][j-1] = arr[i-1][j] = 'W';
                }
                else if (
                    arr[i][j] == 'W' && arr[i][j-1] == '.' 
                    && arr[i+1][j] == '.' && arr[i][j+1] == '.' 
                    && arr[i-1][j] == '.')
                {
                    arr[i][j-1] = arr[i+1][j] = arr[i][j-1] = arr[i-1][j] = 'R';
                }
            }
        }
        
        
    }
    return 0;
}