#include<bits/stdc++.h>
using namespace std;

int second_max(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int second_min(int arr[], int n)
{
    int smaller = arr[0];
    int ssmaller = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smaller)
        {
            ssmaller = smaller;
            smaller = arr[i];
        }
        else if (arr[i] != smaller && arr[i] < ssmaller)
        {
            ssmaller = arr[i];
        }
    }
    return ssmaller;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Maximum: " << second_max(arr, n) << endl;
    cout << "Second Minimum: " << second_min(arr, n) << endl;

    return 0;
}
