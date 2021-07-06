#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int c = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if ((q-p) >= 2)
            c++;
    }
    cout << c;
    
    return 0;
}