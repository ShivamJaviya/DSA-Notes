#include<bits/stdc++.h>
using namespace std;
int main() {
    map<char, int> m;

    m['a'] = 1;
    m['b'] = 2;
    m['c'] = 3;

    m.insert({'x', 7});
    for(auto it = m.begin(); it != m.end(); it++) {
        cout<< it->first << " " << it->second<<'\n';
    }

    return 0;
}
