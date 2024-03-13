#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool signel=1;

for (int i = 0; i < n; i++)
{
    if(arr[i]>=arr[i-1]){
        signel=1;
    }    
    else{
        signel =0;
    }
}
if(signel==0)
{
    cout<<"not sorted";
}
else{
    cout<<"sorted";
}
    return 0;
}