                                                 //  Topic: Inorder
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
      node* left;
      node* right;

  node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;

  }
};

    node* buildtree(node* root){

        cout << "Enter the data : " <<endl;
        int data;
        cin >> data;
        root = new node(data);

        if(data == -1){
            return NULL;
        }

        cout << "Enter data for inserting in left " << data << endl;
        root -> left = buildtree(root -> left);
        cout <<"Enter data for inserting in right " << data <<  endl;
        root -> right = buildtree(root -> right);
        return root;
}

void levelorderTraverse(node* root){
     queue<node*> q;
     q.push(root);

     q.push(NULL);  // separater

    while(!q.empty()){
      node* temp = q.front();
          q.pop();

      if(temp == NULL){  // previous level completely traverse are done
        cout << endl;

        if(!q.empty()){
          q.push(NULL);
        }

      }
 
    else{
        cout << temp -> data << " ";
         if(temp -> left){
            q.push(temp -> left);
          }

      if(temp -> right){
      q.push(temp -> right);
      }
    }
  }
}

  void inorder(node* root){

    // base case
    if(root == NULL){
        return ;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
  }
int main(){

    node* root = NULL;

    root  = buildtree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    levelorderTraverse( root);

    // inorder
    cout << "inorder sequence is : ";
   inorder(root);

  return 0;
} 
                                                //   Topic :  Preorder
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
      node* left;
      node* right;

  node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;

  }
};

    node* buildtree(node* root){

        cout << "Enter the data : " <<endl;
        int data;
        cin >> data;
        root = new node(data);

        if(data == -1){
            return NULL;
        }

        cout << "Enter data for inserting in left " << data << endl;
        root -> left = buildtree(root -> left);
        cout <<"Enter data for inserting in right " << data <<  endl;
        root -> right = buildtree(root -> right);
        return root;
}

void levelorderTraverse(node* root){
     queue<node*> q;
     q.push(root);

     q.push(NULL);  // separater

    while(!q.empty()){
      node* temp = q.front();
          q.pop();

      if(temp == NULL){  // previous level completely traverse are done
        cout << endl;

        if(!q.empty()){
          q.push(NULL);
        }

      }
 
    else{
        cout << temp -> data << " ";
         if(temp -> left){
            q.push(temp -> left);
          }

      if(temp -> right){
      q.push(temp -> right);
      }
    }
  }
}

  void preorder(node* root){

    // base case
    if(root == NULL){
        return ;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
  }
int main(){

    node* root = NULL;

    root  = buildtree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    levelorderTraverse( root);

    // inorder
    cout << "preorder sequence is : ";
   preorder(root);

  return 0;
}     

                                                    //Topic :  Postorder
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
      node* left;
      node* right;


  node(int d){
    this -> data = d;
    this -> left = NULL;
    this -> right = NULL;

  }
};

    node* buildtree(node* root){

        cout << "Enter the data : " <<endl;
        int data;
        cin >> data;
        root = new node(data);

        if(data == -1){
            return NULL;
        }

        cout << "Enter data for inserting in left " << data << endl;
        root -> left = buildtree(root -> left);
        cout <<"Enter data for inserting in right " << data <<  endl;
        root -> right = buildtree(root -> right);
        return root;
}

void levelorderTraverse(node* root){
     queue<node*> q;
     q.push(root);

     q.push(NULL);  // separater

    while(!q.empty()){
      node* temp = q.front();
          q.pop();

      if(temp == NULL){  // previous level completely traverse are done
        cout << endl;

        if(!q.empty()){
          q.push(NULL);
        }

      }
 
    else{
        cout << temp -> data << " ";
         if(temp -> left){
            q.push(temp -> left);
          }

      if(temp -> right){
      q.push(temp -> right);
      }
    }
  }
}
  void postorder(node* root){

    // base case
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
  }
int main(){

    node* root = NULL;

    root  = buildtree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    levelorderTraverse( root);

    // inorder
    cout << "postorder sequence is : ";
   postorder(root);

  return 0;
}  
