#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,0,2,3,4,5,0,8,9,7,4,15,10};
    int n = sizeof(a)/sizeof(a[0]);
    int k;cin>>k;

    for (int i = 0; i < n; i++)
    {
        if(k==a[i])
        {
            cout<<i;
        }
    }
    
    return 0;
}