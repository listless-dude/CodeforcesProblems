#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count += arr[0];
        }
        if (s[i] == '2')
        {
            count += arr[1];
        }
        if (s[i] == '3')
        {
            count += arr[2];
        }
        if (s[i] == '4')
        {
            count += arr[3];
        }
    }
    cout << count;
    return 0;
}