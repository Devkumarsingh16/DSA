#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(11);
    q.push(13);
    q.push(15);

    cout << "size of queue is : " << q.size() << endl;

    q.pop();
     cout << "size after pop of queue is : " << q.size() << endl;

     if(q.empty()){
        cout << "queue is empty"<< endl;
     }
     else{
        cout << "Queue is not empty" << endl;
     }

     cout << "front element is : " << q.front() << endl;

}
