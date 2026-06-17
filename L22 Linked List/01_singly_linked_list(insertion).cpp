#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }

};

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    return 0;
}                                                     // Instertion at head or starting

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }
};

void insertathead(Node* &head , int d){
    // create a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){

    Node* temp = head;
    
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

    // create a new node
    Node* node1 = new Node(10);

    // head point to node1

    Node* head = node1;
    print(head);
    cout << endl;

    insertathead(head,12);
    print(head);

    return 0;
} 

                                                  //Insert at tail or ending
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }
};

void insertattail(Node* &tail, int d){
    // create a new node
    Node* temp = new Node(d);
   tail -> next = temp;
    tail = temp;
}

void print(Node* &head){

    Node* temp = head;
    
    while(temp != NULL){  
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

    // create a new node
    Node* node1 = new Node(10);

    // head point to node1

    Node* head = node1;
    Node*tail = node1;
    print(head);
    cout << endl;

    insertattail(tail,12);
    print(head);

    return 0;
} 
                                                  // Insert at given position
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }
};

void insertathead(Node* &head , int d){

    // create a new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertattail(Node* &tail, int d){

    // create a new node
    Node* temp = new Node(d);
   tail -> next = temp;
    tail = temp;
}

void insertatposition(Node* &head, Node* &tail,int position, int d){

 // insert at Start
if(position == 1){
    insertathead(head,d);
    return;
}

    Node* temp = head;
    int count = 1;

    while(count < position-1){
    temp = temp -> next;
    count++;
    }

    // insert at last
    if(temp -> next == NULL){
        insertattail(tail,d);
        return;
    }
    // creating a node for d;
    Node* newNode= new Node(d);
    newNode -> next = temp -> next;
    temp -> next = newNode;
    
}

void print(Node* &head){

    Node* temp = head;
    
    while(temp != NULL){  
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

    // create a new node
    Node* node1 = new Node(10);

    // head point to node1

    Node* head = node1;
    Node*tail = node1;
    print(head);
    cout << endl;

    insertattail(tail,12);
    print(head);
    cout << endl;

    insertattail(tail,15);
    print(head);
    cout<< endl;

    insertatposition(head,tail,2,22);
    print(head);

    return 0;
} 
