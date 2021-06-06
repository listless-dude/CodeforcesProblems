#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;

    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int vas = 0, pet = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] == a[i])
            {
                vas += i + 1;
            }
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = m-1; j >= 0; j--)
        {
            if (b[j] == a[i])
            {
                pet += n-i;
            }
        }
    }
    cout << vas << ' ' << pet;
    return 0;
}