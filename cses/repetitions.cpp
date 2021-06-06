#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int ans = 0, c = 0;
    char l = 'A';
    for (char d : s)
    {
        if (d == l)
        {
            c++;
            ans = max(c, ans);
        }
        else
        {
            l = d;
            c = 1;
        }
    }
    cout << ans;
    return 0;
}