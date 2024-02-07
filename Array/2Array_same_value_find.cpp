#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size =9;
    int arr1[size] = {10, 20, 30, 40, 50, 60 , 70, 80};
    int arr2[size] = {10, 200, 300, 400, 500, 600 , 700, 800};

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; i++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr2[j];
            }
        }
        
    }
    

    return 0;
}