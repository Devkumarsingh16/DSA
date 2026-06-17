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

    // Deconstructor
    ~Node(){
        int value = this -> data;

        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
            
           cout << " memory free for node with data : "<< value << endl;
        }
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

void deleteatposition(int position , Node* &head,Node* &tail){

    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        
        temp -> next = NULL;
        delete temp;
    }

    else{
          // deleting any middle node or last node
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < position){
            previous = current;
            current = current -> next;
            count++;
        }

        if(current -> next != NULL){
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;
        }
        else{
            tail = previous;
            previous -> next = current -> next;
           current -> next = NULL;
           delete current;
            
        }
    }
}

void print(Node* &head){

    Node* temp = head;
    
    while(temp != NULL){  
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    // create a new node
    Node* node1 = new Node(10);

    // head point to node1

    Node* head = node1;
    Node*tail = node1;
    print(head);
   
    insertattail(tail,12);
    print(head);
   

    insertattail(tail,15);
    print(head);

    cout << head -> data << endl;
    cout << tail -> data << endl;
    
    deleteatposition(3,head,tail);
    print(head);
    
    cout << " head data is : " << head -> data << endl;
    cout << " tail data is : " <<  tail -> data << endl;

    return 0;
} 
