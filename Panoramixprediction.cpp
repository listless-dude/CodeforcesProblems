#include <bits/stdc++.h>

using namespace std;

bool isPrime (int a)
{
    int count = 0; 
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
            count++;
    }
    if (count > 2)
        return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int count = 0;
    if (isPrime(m))
    {
        for (int i = n+1; i <= m; ++i)
        {
            if (isPrime(i))
                count++;
        }
    }

    if (count == 1)
        cout << "YES";
    else cout << "NO";
    return 0;
}