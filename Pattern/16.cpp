#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
          cout<<" ";
        }
        for (int k = 0; k <= n-i; k++)
        {
          cout<<i;
        }

        cout<<endl; 
        
    }
    
    
    return 0;
}