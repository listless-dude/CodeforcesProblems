#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    int count = 0;
    while (T--)
    {
        int N;
        cin >> N;
        while (N--)
        {
            int a, b;
            cin >> a >> b;
            count += b-a;
        }   
    }
    cout << count;
    return 0;
}