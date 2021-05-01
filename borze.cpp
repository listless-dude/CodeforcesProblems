#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/32/B
using namespace std;

string solve(string s)
{
    string res;
    for (int i =  0; i < s.length(); ++i)
    {
        if (s[i] == '.')
        {
            res += '0';
        }

        if (s[i] == '-' && s[i+1] == '.')
        {
            res += '1';
            i++;
        }

        if (s[i] == '-' && s[i+1] == '-')
        {
            res += '2';
            i++;
        }

    }
    cout << res;
}
int main()
{
    string borze;
    cin >> borze;
    
    solve(borze);
    return 0;
}