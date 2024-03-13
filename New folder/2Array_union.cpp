#include <bits/stdc++.h>
using namespace std;

/* Function returns the union of arr1[] and arr2[]
   m is the number of elements in arr1[]
   n is the number of elements in arr2[] */
vector<int> getUnion(int arr1[], int arr2[], int m, int n)
{
    vector<int> result;
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            result.push_back(arr1[i++]);

        else if (arr2[j] < arr1[i])
            result.push_back(arr2[j++]);

        else {
            result.push_back(arr2[j++]);
            i++;
        }
    }

    /* Add remaining elements of the larger array */
    while (i < m)
        result.push_back(arr1[i++]);

    while (j < n)
        result.push_back(arr2[j++]);

    return result;
}

/* Driver program to test above function */
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Function calling
    vector<int> unionResult = getUnion(arr1, arr2, m, n);

    // Print the union array
    cout << "Union of the two arrays: ";
    for (int i = 0; i < unionResult.size(); i++) {
        cout << unionResult[i] << " ";
    }

    return 0;
}
