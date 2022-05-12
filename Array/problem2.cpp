// Write a program to reverse an array or string

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = arr[i];                   //* WITH FOR LOOP
    //     arr[i] = arr[(n - 1) - i];
    //     arr[(n - 1) - i] = temp;
    // }

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];      //* WITH WHILE LOOP
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}