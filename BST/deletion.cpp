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

Node* deleteNode(Node* root ,int val){
    //  base case
    if(root==NULL){
        return root;
    }

    if(root->data==val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child with left
         if(root->left != NULL && root->right == NULL){
            Node* temp= root->left;
            delete root;
            return temp;
        }

        // 1 child with right
          if(root->left == NULL && root->right != NULL){
            Node* temp= root->right;
            delete root;
            return temp;
        }


        // 2 child
        // isme hum root ki left tree se max. value nikaal sakte h ya right tree se min. value
         if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
             root->data =mini;
             root->right= deleteNode (root->right,mini);
             return root;
            // int maxi = maxVal(root->left)->data;
            //  root->data =maxi;
            //  root->left= deleteNode (root->left,maxi);
            //  return root;
        }
    }

    else if(val>root->data){
        root->right = deleteNode(root->right, val);
    }
    else{
        root->left = deleteNode(root->left, val);
    }
}

void Inorder(struct Node* root)
{
    if (root == NULL)
        return;
 
   
     Inorder(root->left); 
     cout << root->data << " ";
     Inorder(root->right);
}
void Preorder(struct Node* root)
{
    if (root == NULL)
        return;
 
   
      cout << root->data << " ";
     Preorder(root->left);
     Preorder(root->right);
    
}

int main()
{
    struct Node* root = new Node(9);
    root->left = new Node(4);
    root->right = new Node(11);
    root->left->left = new Node(2);
    root->left->right = new Node(7);

int val;
cin>>val;
 
deleteNode(root,val);

  
  cout<<"inorder traversal"<<endl;
  Inorder(root);
  cout<<endl;
    cout<<"preorder traversal"<<endl;
  Preorder(root);
   
    return 0;
}

