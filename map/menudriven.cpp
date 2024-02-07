#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> mymap;

  mymap['a']=10;
  mymap['b']=30;
  mymap['c']=50;
  mymap['d']=70;

for (auto it = mymap.begin(); it != mymap.end(); it++)
{
    cout<<it->first<<"=>"<<it->second<<"\n";
}

map <char,int> second;
// value share first to second map 
second=mymap;

// print value of any map 
for (auto it = mymap.begin(); it != mymap.end(); it++)
{
    cout<<it->first<<"=>"<<it->second<<"\n";
}

std::cout << "Size of first: " << mymap.size() << '\n';
//mymap=std::map<char,int>(); // map empty
std::cout << "Size of first: " << mymap.size() << '\n';
std::cout << "Size of second: " << second.size() << '\n';


//rbegin
for (map<char,int>::reverse_iterator rit = second.rbegin(); rit != second.rend(); ++rit){
    std::cout << rit->first << " => " << rit->second << "\n";
}




    return 0;
}