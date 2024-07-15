#include <iostream>
#include<queue>
using namespace std;
 
struct Node {
    int data;
    struct Node *left, *right;

    Node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};

Node* lastrightchild(Node* root){
    if(root->right==NULL){return root;}
    return lastrightchild(root->right);
  }

Node* helper(Node* root){

    if(root->left==NULL){return root->right;}
    else if(root->right==NULL){return root->left;}

     Node* rightchild=root->right;
     Node* lastright = lastrightchild(root->left);
     lastright->right = rightchild;
     return root->left;
     
}


 Node* deleteNode(Node* root, int key) 
    {
       if(root==NULL) return NULL;
       if(root->data==key)
        { 
            return helper(root);
        }   

        Node* dummy=root;
        while(root!=NULL)
        {
            if(root->data>key)
            {
                if(root->left!=NULL&& root->left->data==key)
                {
                    root->left=helper(root->left);
                    break;
                }
                else
                {
                    root=root->left;
                }
            }
           else
           {
            if(root->right!=NULL&& root->right->data==key)
            {
            root->right=helper(root->right);
            break;
            }
            else
            {
                root=root->right;
            } 
           }
        }

    return dummy;
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

int key;
cin>>key;
 
deleteNode(root,key);

  
  cout<<"inorder traversal"<<endl;
  Inorder(root);
  cout<<endl;
    cout<<"preorder traversal"<<endl;
  Preorder(root);
   
    return 0;
}

