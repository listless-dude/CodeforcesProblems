#include <bits/stdc++.h>
// https://codeforces.com/problemset/problem/271/A
using namespace std;

bool isRepeat(int n)
{
    bool repeat = false;
    vector<int> number;
    while (n)
    {
        number.push_back(n%10);
        n /= 10;
    }
    
    for (int i = 0; i < number.size(); ++i)
    {
        for (int j = i + 1; j < number.size(); ++j)
        {
            if (number[i] == number[j])
            {
                repeat = true;
            }
        }
    }
    return repeat;
}
int solve(int n)
{
    int tmp = n;
    vector<int> arr;

    while (tmp < 10e5)
    {
        tmp++;
        if (isRepeat(tmp) == false)
        {
            return tmp;
        }
        
    }
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n);
    return 0;
}