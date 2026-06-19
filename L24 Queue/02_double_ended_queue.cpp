#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> q;

    q.push_front(12);
    q.push_back(14);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop_front();
     cout << q.front() << endl;
    cout << q.back() << endl;

    if(q.empty()){
        cout <<" empty"<< endl;

    }
    else{
        cout << " it is not empty"<< endl;
    }

}
