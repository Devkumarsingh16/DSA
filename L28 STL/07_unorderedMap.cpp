#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(50, 230));
    m.insert(make_pair(30, 30));

    // m[20] = 70;
    
   
    for(auto i = m.begin(); i != m.end() ; i++){
        cout << (*i).first <<" "<<(*i).second<< endl;
    }

    //               // unordered multimap
       unordered_multimap<int,int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(50, 230));
    m.insert(make_pair(30, 30));

  
    
   
    for(auto i = m.begin(); i != m.end() ; i++){
        cout << (*i).first <<" "<<(*i).second<< endl;
    }
}
