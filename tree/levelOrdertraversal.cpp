
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

// using null method
 
void LevelOrder(Node* root){
     if (root == NULL)
        return;

     queue<Node*> q;
     q.push(root);
     q.push(NULL);


     while(!q.empty()){
        Node* temp = q.front();
        q.pop();
          

     if(temp!= NULL){
         cout << temp->data << " ";

         if (temp->left != NULL)
            q.push(temp->left);

         if (temp->right != NULL)
            q.push(temp->right);   

      }

      else if(!q.empty())
       q.push(NULL);

     }
}


// 2nd method using for loop for every level


//  void LevelOrder(Node* root)
//     {
      

//       if(root==NULL) 
//      return ;

// queue<Node*>q;
//     q.push(root);

//     while(!q.empty()){

//         int size=q.size();

//         for(int i=0;i<size;i++){
//             Node*temp=q.front();
//              q.pop();

//         if(temp!=NULL)
//         cout << temp->data << " ";

//           if(temp->left!=NULL)
//           q.push(temp->left);

//           if(temp->right!=NULL)
//           q.push(temp->right);  
//         }
//       }
//     }


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
  LevelOrder(root);
    return 0;
}



// this method is same like upper method of using for loop but yhaa pr hmne uski value vector m store kri h alag se aur vector print kraya h ,ye gfg ke liye h

// #include <iostream>
// #include<queue>
// using namespace std;
 
// struct Node {
//     int data;
//     struct Node *left, *right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

//  vector<int> LevelOrder(Node* root)
//     {
            
//    vector<int> ans;  

//       if(root==NULL) {
//               return ans;
//            }

//       queue<Node*> q;

//       q.push(root);

//       while(!q.empty())

//       {
//             int size=q.size();

//      for(int i=0;i<size;i++){
//             Node*temp=q.front();
//              q.pop();
             
//         if(temp!=NULL) 
//            ans.push_back(temp->data);
        
        
//           if(temp->left!=NULL)
//           q.push(temp->left);
          
//           if(temp->right!=NULL)
//           q.push(temp->right);  
//         }

//       }

      

//       return ans;
//     }


// int main()
// {
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
 
//   vector<int> res= LevelOrder(root);
//   for(auto i:res) cout<<i<<" ";
//     cout<<endl;
// }