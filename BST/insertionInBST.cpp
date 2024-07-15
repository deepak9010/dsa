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

Node* insert(Node* root, int Key) {
    // recursive approach
   if (root==NULL){
   root= new Node(Key);
       return root;
   }
   
   if(root->data == Key){
              return root;
        }
   
   if(Key>root->data){
      root->right= insert(root->right,Key);
   }
   
  else{
      root->left= insert(root->left,Key);
   }
   
   return root;

    // iterative approach

//          if(root==NULL){
//             root= new Node(Key);
//             return root;
//         }

//         Node*temp = root;
//         while(true){
//             if(temp->data == Key){
//                 return temp;
//             }

//             if(temp-> data < Key){
//                 if(temp->right != NULL){
//                     temp = temp->right;
//                 }
//                 else{
//                     temp->right = new Node(Key);
//                     break;
//                 }
//             }
//             else{
//                 if(temp->left != NULL){
//                     temp = temp->left;
//                 }
//                 else{
//                     temp->left = new Node(Key);
//                     break;
//                 }
//             }
//         }
//         return root;
}

void Inorder(struct Node* root)
{
    if (root == NULL)
        return;
 
   
     Inorder(root->left); 
     cout << root->data << " ";
     Inorder(root->right);
}


int main()
{
    struct Node* root = new Node(9);
    root->left = new Node(4);
    root->right = new Node(11);
    root->left->left = new Node(2);
    root->left->right = new Node(7);


   int x;
   cin>>x;

insert(root,x);
 
  cout<<"inorder traversal"<<endl;
  Inorder(root);

  

    return 0;
}

