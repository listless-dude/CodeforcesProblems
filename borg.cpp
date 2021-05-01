#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vector<char> s1;

    map<char, int> m;

    for (int i = 0; i < s.length(); ++i)
    {
        m[s[i]]++;
    }
    
    (m.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    return 0;
}