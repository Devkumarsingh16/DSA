#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;          // previous(prev)


    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void print(Node* &head){

    Node*temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
                   // gives length of linked list;
int getLength(Node* &head){
    int length = 0;
      Node*temp = head;

    while(temp != NULL){
      length++;
        temp = temp -> next;
    }
    return length;

}

                // insert at head
 void insertathead(Node* &head,int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
 }
                 // insert at tail
 void insertattail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
 }

                  // insert at position
void insertatposition(Node* &head,Node* &tail,int position,int d){
    
    // insert at head
    if(position == 1){
        insertathead(head,d);
        return;
    }

    else{
             // insert at middle or last
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

        // creating node for d
        Node* newNode = new Node(d);
        newNode -> next = temp -> next;
        temp -> next -> prev = newNode;
        temp -> next = newNode;
        newNode -> prev = temp;

    }
}
int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    cout << getLength(head) << endl;

    insertathead(head,11);
    print(head); 

    insertattail(tail,13);
    print(head);

    insertatposition(head,tail,3,15);
    print(head);

    return 0;
}

                                                      // Topic : Deletion
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;          // previous(prev)

    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~Node(){
      int value = this -> data;
      if(next !=NULL){
        delete next;
        next = NULL;
      }
            cout << "delete value : " << value << endl;
    }

};

void print(Node* &head){

    Node*temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

                // insert at head
 void insertathead(Node* &head,int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
 }
                 // insert at tail
 void insertattail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
 }

                  // insert at position
void insertatposition(Node* &head,Node* &tail,int position,int d){
    
    // insert at head
    if(position == 1){
        insertathead(head,d);
        return;
    }

    else{
             // insert at middle or last
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

        // creating node for d

        Node* newNode = new Node(d);
        newNode -> next = temp -> next;
        temp -> next -> prev = newNode;
        temp -> next = newNode;
        newNode -> prev = temp;
    }
}

void deleteatposition(Node* &head,Node* &tail,int position){

         // if position is starting
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else{
            // if position is in middle or last
            Node* curr = head;
            Node* prev = NULL;
            int count = 1;

            while(count < position){
               prev = curr;
               curr = curr -> next;
               count++;
            }

            if(curr -> next != NULL){
            curr -> prev = NULL;
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
            }
            else{
                tail = prev;
            curr -> prev = NULL;
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
            }
    }
}
int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

       insertathead(head,11);
    print(head); 

    insertattail(tail,13);
    print(head);

    insertatposition(head,tail,3,15);
    print(head);

    deleteatposition(head,tail,4);
    print(head);

    cout << "head data is  : " << head -> data << endl;
    cout <<" tail data is  : "<< tail -> data << endl;

    return 0;
}
