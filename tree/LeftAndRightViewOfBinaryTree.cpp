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

 vector<int> LevelOrder(Node* root)
    {
            
   vector<int> ans;  

      if(root==NULL) {
              return ans;
           }

      queue<Node*> q;

      q.push(root);

      while(!q.empty())

      {
            int size=q.size();

     for(int i=0;i<size;i++){
            Node*temp=q.front();
             q.pop();

            //  left view
        if(i==0) 
           ans.push_back(temp->data);


      // right view
        // if(i==size-1) 
        //    ans.push_back(temp->data);
        
        
          if(temp->left!=NULL)
          q.push(temp->left);
          
          if(temp->right!=NULL)
          q.push(temp->right);  
        }

      }

      

      return ans;
    }


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
      root->left->left->right= new Node(6);
 
  vector<int> res= LevelOrder(root);
  for(auto i:res) cout<<i<<" ";
    cout<<endl;
}