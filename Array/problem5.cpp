// Chocolate Distribution Problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = INT_MAX;
    sort(arr, arr + n);
    int i = 0;
    while (i + m - 1 < n)
    {
        if (arr[i + m - 1] - arr[i] < min)
        {
            min = arr[i + m - 1] - arr[i];
        }
        i++;
    }
    cout << min << endl;
}