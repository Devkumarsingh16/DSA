#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;

    l.push_front(30);
    l.push_front(20);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);
    l.push_back(70);
    l.push_back(80);
    l.pop_back();
    l.pop_front();

    // cout<<l1.front() <<" " << l1.back()<<endl;
    // cout << l1.size()<<endl;

    // iterate over the list
    for(auto i = l.begin(); i != l.end(); i++){
        cout << *i << " ";
    }

    cout << endl;

    // to print list in reverse order
    for(auto i = l.rbegin(); i != l.rend() ; i++){
        cout << *i << " ";
    }
    return 0;
}
