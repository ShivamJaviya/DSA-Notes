#include<bits/stdc++.h>
using namespace std;

void Binaraysearch(int arr[], int size, int find)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (find == arr[mid])
        {
            cout << "Element found at index: " << mid << endl;
            return;  // Add a return statement to exit the function once the element is found.
        }
        else if (find < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "Element not found" << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    for (int i = 0; i < size1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    Binaraysearch(arr, size1, key);

    return 0;
}
