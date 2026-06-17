
                                                  //Insertion
#include<iostream>
using namespace  std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertNode(Node* &tail,int element,int d){

    // empty node

    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }

    else{

        // non-empty

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void print(Node* &tail){

    Node* temp = tail;

    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(temp != tail);
    cout << endl;
}

int main(){

     Node* tail = NULL;

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

     insertNode(tail,9,11);
    print(tail);

     insertNode(tail,7,8);
    print(tail);

return 0;
}

                                                     // Topic:  Deletion
#include<iostream>
using namespace  std;

class Node{

    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;

        while(this ->next != NULL){
            delete next;
            next = NULL;
 
        }
        cout << "NOde delete with value : " << value << endl;
    }
};

void insertNode(Node* &tail,int element,int d){

    // empty node
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode -> next = newnode;
    }

    else{
        // non-empty
        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail,int value){
      
    // if empty Linked list
    if(tail == NULL){
        cout << "empty" << endl;
        return;
    }

    // if non-empty
    Node* prev = tail;
    Node* curr = prev -> next;

    while(curr -> data != value){
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = curr -> next;

     // 1 node LL

    if(curr == prev){
        tail = NULL;
    }

    //>=2 LL
    if(tail == curr){
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;

}

void print(Node* &tail){

    Node* temp = tail;

    if(tail == NULL){
        cout << "empty LL " << endl;
        return;
    }

    do{
        cout << temp -> data << " ";
        temp = temp -> next;
    }while(temp != tail);
    cout << endl;
}

int main(){

     Node* tail = NULL;

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

     insertNode(tail,9,11);
    print(tail);

    insertNode(tail,7,8);
    print(tail);

    deleteNode(tail,5);
    print(tail);
  
return 0;
}
