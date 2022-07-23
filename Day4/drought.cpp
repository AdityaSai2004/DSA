#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("rainin.txt", "r", stdin);
    freopen("rainout.txt", "w", stdout);
    int n, c, d, sum = 0;
    cin >> n >> c;
    int forcast[n];
    for (int i = 0; i < n; i++)
    {
        cin >> forcast[i];
        sum += forcast[i];
        if (sum > c)
        {
            d = i - 1;
        }
        if (sum == c)
        {
            d = i;
        }
    }
    cout << d;
}