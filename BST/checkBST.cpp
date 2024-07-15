#include <iostream>
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
 

void Inorder(struct Node* root)
{
    if (root == NULL)
        return;
 
   
     Inorder(root->left); 
     cout << root->data << " ";
     Inorder(root->right);
}

  int isBST(struct Node* root)
    {
        static   Node *prev = NULL;
  
         if(root == NULL) return true;

        if(!isBST(root->left)){
            return 0;
        }
        
        if(prev != NULL && root->data<=prev->data ){
            return 0;
        }
        
        prev = root;
        return isBST(root->right);
    }

  
//    Node *prev = NULL;
    // int isBST(struct Node* root)
    // {
    //     static   Node *prev = NULL;
    // if(root!=NULL){
        
    //     if(!isBST(root->left)){
    //         return 0;
    //     }
        
    //     if(prev != NULL && root->data<=prev->data ){
    //         return 0;
    //     }
        
    //     prev = root;
    //     return isBST(root->right);
    // }

    // else{
    //     return 1;
    // }
        
    // }
  
        
    

int main()
{
    struct Node* root = new Node(9);
    root->left = new Node(3);
    root->right = new Node(11);
    root->left->left = new Node(2);
    root->left->right = new Node(7);

   


  cout<<"inorder traversal"<<endl;
  Inorder(root);

  cout<<endl; 
  cout<<isBST(root);


    return 0;
}




