#include<iostream>
using namespace std;

class Node{
    public:
    int data,height;
    Node *left,*right;

    Node(int value){
        data = value;
        height = 1;
        left = right =NULL;
    }
};

int getheight(  Node *root){

    if(root == NULL){
        return 0;
    } 
    return root -> height;
}

int getbalance(Node* root){
    return getheight(root -> left) - getheight(root -> right);
}


Node *rightRotation(Node* root){

    Node *child = root -> left;
    Node *childRight  = child -> right;

    child -> right = root;
    root -> left = childRight;

    // update height of root and child

    root -> height = 1+ max(getheight(root-> left),getheight(root -> right));
    child -> height  = 1 + max(getheight(child -> left),getheight(root -> right));

    return child;
}


Node *leftRotation(Node *root){

    Node *child = root -> right;
    Node *childLeft = child -> left;

    child -> left = root;
    root -> right = childLeft;

    root -> height = 1+ max(getheight(root-> left),getheight(root -> right));
    child -> height  = 1 + max(getheight(child -> left),getheight(root -> right));

     return child;
}

Node* insert(Node *root,int key){

    //if root doesn't exist
    if(root == NULL){
        return new Node(key);
    }

    //exist krta ho
    if(key < root -> data){
        root -> left = insert(root -> left,key);

    }
    else if(key > root -> data){
        root -> right = insert(root -> right,key);
    }
    else{
        return root;
    }

    // update height
    root -> height = 1+ max(getheight(root -> left),getheight(root -> right));

    // Balancing check
    int balancing = getbalance(root);

    //cases
    // 1. left left case
    if(balancing > 1 && key < root -> left -> data)
    {
       return rightRotation(root);
    }
    // 2. right right case
    else if(balancing < -1 && root -> right -> data < key)
    {

        return leftRotation(root);
    }
    // 3. left right  case
    else if(balancing > 1 && root -> left -> data <key)
    {
       root-> left =  leftRotation(root -> left);
        return rightRotation(root);
    }
    // 4. right left  case
    else if(balancing < -1 && root -> right -> data > key)
    {
       root -> right =  rightRotation(root -> right);
       return leftRotation(root);
    }
    // 5. No unbalacing
    else{
        return root;
    }
}
int main(){
     
    // duplicate here not taken
    Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);

}
