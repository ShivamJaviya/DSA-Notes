#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1,0,2,3,4,5,0,8,9,7,4,15,10};
    int n = sizeof(a)/sizeof(a[0]);

    int b[n];
    int j=0;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            b[j]=a[i];
            j++;
        }
        else{
            count++;
        }
    }

    while (count>0)
    {
        b[j]=0;
        count--;
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        a[i]=b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    
    return 0;
}