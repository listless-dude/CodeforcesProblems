#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long k, n, w;
    cin >> k >> n >> w;

    long long total = 0;
    for (int i = 1; i <= w; i++)
    {
        total += i * k;
    }

    if (total - n < 0)
    {
        cout << 0;
    }
    else
    {
        cout << total - n;
    }
    return 0;
}