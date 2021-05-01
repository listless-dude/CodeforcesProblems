#include <bits/stdc++.h>
// http://codeforces.com/contest/381/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, yes;
    cin >> n;

    deque<int> arr;

    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    int sereja = 0, dima = 0;
    
    for (int i = 0; i < n; ++i)
    {
        int max;
        if (arr.front() > arr.back())
        {
            max = arr.front();
            arr.pop_front();
        }
        else
        {
            max = arr.back();
            arr.pop_back();
        }

        if (!yes)
        {
            sereja += max;
            yes = 1;
        }        
        else
        {
            dima += max;
            yes = 0;
        }
    }

    cout << dima << ' ' << sereja << '\n';
    return 0;
}