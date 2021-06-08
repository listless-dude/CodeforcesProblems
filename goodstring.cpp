#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.size()/2; i++)
        {
            if (s[i] != s[s.size()-i-1])
            {
                count++;
            }
        }
        cout << "Case #" << j << ": " << abs(k-count) << endl;
    }
    
    return 0;
}