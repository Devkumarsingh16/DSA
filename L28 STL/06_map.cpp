#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // map<int,int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(50, 230));
    m.insert(make_pair(30, 30));
    
    m[60] = 100;   // insert the value
    m[20]= 70;    // it update the value 

    m.erase(50); // delete


    for(auto i = m.begin(); i != m.end() ; i++){
        cout << (*i).first <<" "<<(*i).second<< endl;
  
                        // multiMap
      multimap<int,int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(50, 230));
    m.insert(make_pair(30, 30));
    
    // in multimap below two line of code is not allowed because here is confusing is add or update
    // m[60] = 100;   // insert the value
    // m[20]= 70;    // it update the value 
    for(auto i = m.begin(); i != m.end() ; i++){
        cout << (*i).first <<" "<<(*i).second<< endl;
                     
    }
}
