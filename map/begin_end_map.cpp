#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <char,int> mymap;

    mymap['f']=1;
    mymap['s']=2;
    mymap['t']=3;

    cout<<begin(mymap)<<endl;
    cout<<end(mymap)<<endl;
    return 0;
}