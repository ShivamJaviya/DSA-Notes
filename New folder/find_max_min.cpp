#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

   sort(arr, arr + n);

   cout<<"MAXIMUM VALUE"<<arr[n-1];
   cout<<"MINIMUM VALUE"<<arr[0];



    return 0;
}