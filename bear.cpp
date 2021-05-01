#include <bits/stdc++.h>

using namespace std;
// http://codeforces.com/contest/791/problem/A
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int years = 0; 
    
    do
    {
        a *= 3;
        b *= 2;
        years++;
    } while (a <= b);
    
    cout << years;
    return 0;
}