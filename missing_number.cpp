// #include<bits/stdc++.h>
// using namespace std;
// void findMissing(int arr[],int n)
// {
//     int tmep=arr[0];

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==tmep)
//         {
//             tmep++;
//         }
//         else{
//             cout<<tmep;
//             break;
//         }
//     }
// }
// int main()
// {
//     int arr[] = { 1, 3, 7, 5, 6, 2 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     sort(arr,arr+n);
//     cout<<n;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
    
//     findMissing(arr, n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int missingnumber(vector<int>& a, int n)
{
    int sum = (n * (n + 1)) / 2;
    int sumofarr = 0;

    for (int i = 0; i < n; i++)
    {
        sumofarr += a[i];
    }

    int missingnumbers = sum - sumofarr;

    return missingnumbers;
}

int main()
{
    int n = 7;
    vector<int> a = { 1, 3, 7, 5, 6, 2 };
    int ans = missingnumber(a, n);

    cout << ans << endl;

    return 0;
}
