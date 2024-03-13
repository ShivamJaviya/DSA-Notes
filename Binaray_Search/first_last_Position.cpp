#include<bits/stdc++.h>
using namespace std;
int firstposition(int a[],int n,int key)
{
    int s = 0;
    int e = n-1;
    int result = -1;
    while (s<=e)
    {
        int mid = s + (e-s)/2;
        if (a[mid] == key) 
        {
            result = mid;
            e = mid - 1;
        }
        else if(a[mid] > key)
        {
            e = mid - 1;
        }
        else if(a[mid] < key)
        {
            s = mid + 1;
        }
    }

    return result;
    
}


int lastposition(int a[],int n,int key)
{
    int s = 0;
    int e = n-1;
    int result = -1;
    while (s<=e)
    {
        int mid = s + (e-s)/2;
        if (a[mid] == key) 
        {
            result = mid;
            s = mid + 1;
        }
        else if(a[mid] > key)
        {
            e = mid - 1;
        }
        else if(a[mid] < key)
        {
            s = mid + 1;
        }
    }

    return result;
    
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7,7,7,7};

    cout<<firstposition(a,10,7)<<endl;
    cout<<lastposition(a,10,7)<<endl;
<<<<<<< HEAD



=======
>>>>>>> b2f314a (last Done)
    return 0;
}