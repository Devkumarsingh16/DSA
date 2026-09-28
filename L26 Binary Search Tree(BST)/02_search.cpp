#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }

};

Node* insert( Node*root,int target){

    // base case

    if(root ==NULL){
        Node* temp = new Node(target);
        return temp;
    }

    if(target < root ->data){
        root -> left = insert(root -> left, target);

    }
    else{
        root -> right = insert(root -> right, target);
    }
    return root;
}

bool search(Node* root,int key ){

    if(root == NULL){
        return false;
    }

    if(root -> data == key){
        return true;
    }
   
    if(key < root -> data){
       int left =  search(root -> left,key);
    }
    else{
      int right =   search(root -> right,key);
    }   

}
int main(){

    int arr[] = {6,3,17,5,11,18,2,1,20,14};
    Node*root = NULL;

    for(int i = 0; i<10; i++){
       root =  insert(root,arr[i]);

    }
        int ans = search(root,90)  ;

        if(ans){
            cout << "found"<<endl;
        }
        else{
            cout << "Not Found" << endl;
        }

}
