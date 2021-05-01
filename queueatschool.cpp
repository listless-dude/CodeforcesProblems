#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/266/B
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i]=='B' && s[i+1] == 'G')
            {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    
    cout << s;
    return 0;
}