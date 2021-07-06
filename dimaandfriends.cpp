#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        sum += k;
    }
    int res = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % (n + 1) != 1)
        {
            res += 1;
        }
    }
    cout << res << endl;
    return 0;
}