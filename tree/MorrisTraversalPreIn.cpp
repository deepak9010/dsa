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
// TC in both traversal is O(n) ans SC is O(1)

// preoder
    void Preorder(Node* root) {
    
        Node *cur = root;

        while(cur!=NULL){
            if(cur->left==NULL){
            cout<<cur->data<<" ";
                cur=cur->right;
            }
            else{
                Node *predecessor = cur->left;

                while(predecessor->right && predecessor->right!=cur){
                    predecessor=predecessor->right;
                }

                if(predecessor->right == NULL){
                    predecessor->right=cur;
                    cout<< cur->data<<" ";
                    cur=cur->left;
                }
                else{
                    predecessor->right=NULL;                    
                    cur=cur->right;
                }
            }
        }
        return ;
    }


// inorder
 void Inorder(Node* root) {
       if(root == NULL) return;

        Node* current, *predecessor;
        current = root;

        while(current != NULL) {
            if(current->left == NULL) {
                cout<<current->data<<" ";
                current = current->right;
            }
            else {
                // get predecessor
                predecessor = current->left;
                while(predecessor->right != NULL && predecessor->right != current) {
                    predecessor = predecessor->right;
                }

                if(predecessor->right == NULL) {
                    predecessor->right = current;
                    current = current->left;
                }
                else {
                    predecessor->right = NULL;
                     cout<<current->data<<" ";
                    current = current->right;
                }
            }
        }
        return;
 }
    
 int main()
   {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

   cout<<endl; 

  cout<<"preorder traversal"<<endl;
  Preorder(root);
   
    cout<<endl; 

  cout<<"inorder traversal"<<endl;
   Inorder(root);


//     cout<<endl; 

//   cout<<"postorder traversal"<<endl;
//   Postorder(root);

    return 0;
} 