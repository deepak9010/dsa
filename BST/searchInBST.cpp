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
 
// this method is recursive method here S.C is O(h).so we use iteravtive method to prevent from TLE ERROR

// bool search(Node* root, int x) {
//         if(root==NULL){
//                return false;
//            }

//     if(root->data==x){
//                  return true;
//             }

//     else if(x>root->data){
//                   search(root->right,x);
//                  }

//     else{
//            search(root->left,x);
//            }

 
// }



// iteravtive method here S.C is constant O(1).
bool search(Node* root, int x) {
//   here we can alse take a pointer like 
// Node*temp=root,and put this temp at every place of root.

    while(root!=NULL)
                    {
                        
         if(x == root->data){
                return true;
                }

        else if(x > root->data)
                     root=root->right;


        else
             root=root->left;

    }

    return false;

}

int main()
{
    struct Node* root = new Node(9);
    root->left = new Node(3);
    root->right = new Node(11);
    root->left->left = new Node(2);
    root->left->right = new Node(7);

   int x;
   cin>>x;

cout<<search(root,x);
 

    return 0;
}

