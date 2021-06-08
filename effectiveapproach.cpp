#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, pos[N];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        pos[num] = i + 1;
    }

    long long sum = 0, sum1 = 0;

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        sum += pos[q];
        sum1 += n - pos[q] + 1;
    }

    cout << sum << ' ' << sum1 << endl;
    return 0;
}