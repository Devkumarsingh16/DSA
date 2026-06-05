                                                 //stack

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;

    s.push("Dev");
    s.push("Kumar");
    s.push("Singh");

    cout<<"Top element of the stack : "<<s.top()<<endl;

    s.pop();
    cout<<"Top element of the stack : "<<s.top()<<endl;

    cout<<"Size of the stack : "<<s.size()<<endl;

    cout<<" is empty : "<<s.empty();          // 0 for false,1 for true

}


                                                 //Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Dev");
    q.push("Kumar");
    q.push("Singh");

    cout<<" Size Before pop : "<<q.size()<<endl;

    cout<<"First Element : "<<q.front()<<endl;

    q.pop();
     cout<<"First Element : "<<q.front()<<endl;

     cout<<"Size after : "<<q.size();   
}

                                                // Priority Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){

    // max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>,greater<int> >mini;

    maxi.push(1);
    maxi.push(5);
    maxi.push(7);
    maxi.push(9);

    cout<<"Size of : "<<maxi.size()<<endl;
    int n = maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(1);
    mini.push(5);
    mini.push(7);
    mini.push(9);

    int m = mini.size();
      for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

cout<<"IS empty : "<<mini.empty();

}
