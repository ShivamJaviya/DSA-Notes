#include<bits/stdc++.h>
using namespace std;
// https://cplusplus.com/reference/map/map/
// maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
int main() {
    // (constructor)
    map<char, int> m;

    // operator=
    m['a'] = 1;
    m['b'] = 2;
    m['c'] = 3;

    map<char, int> copy_m;
    copy_m = m;

    // (destructor)
    // destructor will be called automatically when m go out of scope.
    
    // Iterators:
    // begin
    // end
    for(map<char, int>::iterator it = m.begin(); it != m.end(); ++it) {
        cout<<it->first<<" => "<<it->second<<'\n';
    }

    // rbegin
    // rend
    for(map<char, int>::reverse_iterator it = m.rbegin(); it != m.rend(); ++it) {
        cout<<it->first<<" => "<<it->second<<'\n';
    }
    
    // `const_iterator`: Allows only reading elements in a container, no modifications are allowed.
    // cbegin
    // cend
    for(map<char, int>::const_iterator it = m.cbegin(); it != m.cend(); ++it) {
        cout<<(*it).first<<" : "<<(*it).second<<'\n';
    }

    // crbegin
    // crend
    for(map<char, int>::const_reverse_iterator it = m.crbegin(); it != m.crend(); ++it) {
        cout<<(*it).first<<" : "<<(*it).second<<'\n';
    }

    // using `auto` with iterator to iterate and modify elements
    for(auto it = copy_m.crbegin(); it != copy_m.crend(); ++it) {
        cout<<it->first<<" -> "<<it->second<<'\n';
    }

    // Capacity:
    // empty
    map<int, int> empty;
    cout<<"Empty? "<<m.empty()<<'\n';
    cout<<"Empty(empty map)? "<<empty.empty()<<'\n';

    // size
    cout<<"Size: "<<m.size()<<'\n';
    cout<<"Size(empty map): "<<empty.size()<<'\n';

    // max_size
    cout<<"Max size: "<<m.max_size()<<'\n';
    cout<<"Max size(empty map): "<<empty.max_size()<<'\n';

    // Element access:
    // operator[]
    cout<<"Element at key 'b': "<<m['b']<<'\n';

    // at
    cout<<"Element at key 'a': "<<m.at('a')<<'\n';

    // Modifiers:
    // insert
    m.insert(pair<char, int>('d', 4));
    m.insert(pair<char, int>('e', 5));
    // m.insert({'e', 5});

    // insertion at position
    map<char, int>::iterator it = m.begin();
    m.insert(it, pair<char, int>('F', 6));
    
    // range insertion
    map<char, int> a_m;
    a_m.insert(m.begin(), m.find('c'));

    for(auto it = m.begin(); it != m.end(); ++it) {
        cout<< it->first << " *-> " << it->second<<'\n';
    }

    for(auto it = a_m.begin(); it != a_m.end(); ++it) {
        cout<< it->first << " ^-> " << it->second<<'\n';
    }

    // erase
    // erasing by iterator
    auto it1 = m.find('a');
    m.erase(it1);

    // erasing by key
    m.erase('c');

    // erasing by range
    auto it2 = m.find('e');
    m.erase(it2, m.end());

    for(auto it = m.begin(); it != m.end(); ++it) {
        cout<< it->first <<" *-> "<< it->second << '\n';
    }

    // swap
    copy_m.swap(m);
    
    for(auto it: m) {
        cout<< it.first << " &-> " << it.second << '\n';
    }

    // clear
    m.clear();

    // emplace
    m.emplace('x',24);

    for(auto it: m) {
        cout<< it.first << " %-> " << it.second << '\n';
    }
    

    

    return 0;
}

