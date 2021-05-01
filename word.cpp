#include <bits/stdc++.h>
// https://codeforces.com/contest/59/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    string res;
    int countLower = 0, countUpper = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == tolower(s[i]))
            countLower++;
        else
            countUpper++;
    }
    if (countLower >= countUpper)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    return 0;
}