#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    unordered_map<char, int> M;
    int res = 0;
    for (int i = 0; s[i]; ++i)
    {
        if(M.find(s[i]) == M.end())
        {
            M.insert(make_pair(s[i], 1));
        }
        else
        {
            M[s[i]]++;
        }
    } 

    for (auto& it : M)
    {
        // Incomplete
    }
    return 0;
}