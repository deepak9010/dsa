// we create  tree by 2 methods
// 1st method or good method

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


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 

    return 0;
}


// 2nd method


// #include <iostream>
// using namespace std;
 
// struct Node {
//     int data;
//     struct Node *left, *right;
// };
 
// // Utility function to create a new tree node
// Node* createNode(int data)
// {
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }
 
 
// int main()
// {
//     struct Node* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);
 
 
 
 
//     return 0;
// }