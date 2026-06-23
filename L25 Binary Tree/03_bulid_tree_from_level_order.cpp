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

    void buildFromLevelOrder(node* &root){

        queue<node*> q;

        cout <<"Enter data for root" << endl;
        int data;
        cin >> data;
        root = new node(data);
        q.push(root);

        while(!q.empty()){
            node* temp = q.front();
            q.pop();
        

          cout <<"Enter left node  : " << temp -> data << endl;
          int leftdata;
          cin >> leftdata;

          if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
          }

          cout <<"Enter right node  : " << temp -> data << endl;
          int rightdata;
          cin >> rightdata;

          if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp -> right);
          }
        }
    }
int main(){

    node* root = NULL;

    root  = buildtree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level oreder
    levelorderTraverse( root);

    buildFromLevelOrder(root);

  return 0;
}
