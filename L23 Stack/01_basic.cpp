#include <iostream> 
#include <stack>
using namespace std;

int main(){

    // stack creation
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();
    
    cout << "top element is : " << s.top() << endl;

    // size 
    cout << "size of stack : " << s.size() <<endl;

    if(s.empty()){
        cout << "Stack is empty "<< endl;
    
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    return 0;
}
