#include <iostream>
#include <stack>
using namespace std;

class Stack{
    
    public:
    // property
    int *arr;
    int size;
    int top;


    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;

    }

     // push operation
    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "StackOverflow" << endl;
        }
    }

    // pop operation
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << " Stack Underflow " << endl;
        }
    }

    // peek element
    int peek(){
        if(top >= 0){
           return  arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
       if(top == -1){
        return true;
       }
       else{
        return false;
       }
    }
};

int main(){

    Stack st(5);

    st.push(22);
    st.push(44);
    st.push(55);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

     st.pop();

     if(st.isEmpty()){
        cout << "Stack is empty " << endl;
     }
     else{
        cout << "Stack is not empty" << endl;
     }

}
