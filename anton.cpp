#include <bits/stdc++.h>
// http://codeforces.com/contest/734/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int countA = 0, countB = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        if (s[i] == 'D'){
            countB++;
        }            
    }
    if (countA > countB)
        cout << "Anton";
    else if (countA < countB)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}