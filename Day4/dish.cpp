#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("dishin.txt", "r", stdin);
    freopen("dishout.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << arr[0] << " " << arr[n - 1] << " " << sum / n;
}