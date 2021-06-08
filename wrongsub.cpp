#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, k;

    cin >> n >> k;

    while (k--)
    {
        long long last = n % 10;
        if (last == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n;
    return 0;
}