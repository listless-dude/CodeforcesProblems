#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, last;
    cin >> n >> m;
    
    double t, max(0);

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t/m) >= max)
        {
            last = i;
            max = ceil(t/m);
        }
    }
    
    cout << last;
    return 0;
}