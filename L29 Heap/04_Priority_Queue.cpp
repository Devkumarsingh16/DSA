#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> p;     // by default max heap

    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);
    p.push(60);

      
 
   // top element
    cout << p.top() << endl;

    // delete
     p.pop();

    // top element
    cout << p.top() << endl;

     // size
     cout << p.size() << endl;

     // print all element
    while(!p.empty()){
        cout << p.top()<<" ";
        p.pop();
    }

}

                                                                        // 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int,vector<int>, greater<int>> p;     // min heap

    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);
    p.push(60);

      
  cout << p.top() << endl;
  
    while(!p.empty()){
        cout << p.top()<<" ";
        p.pop();
    }

}
