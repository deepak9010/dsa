#include <iostream>
#include<queue>
using namespace std;
 
struct Node {
    int data;
    struct Node *left, *right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* minVal(Node* root){
      Node* temp= root;
  
  while(temp->left!=NULL){
    temp=temp->left;
  }
  return temp;
}
Node* maxVal(Node* root){
      Node* temp= root;
  
  while(temp->right!=NULL){
    temp=temp->right;
  }
  return temp;
}


int main()
{
    struct Node* root = new Node(9);
    root->left = new Node(4);
    root->right = new Node(11);
    root->left->left = new Node(2);
    root->left->right = new Node(7);


  cout<<minVal(root)->data;
  cout<<endl;
  cout<<maxVal(root)->data;
 


  

    return 0;
}

