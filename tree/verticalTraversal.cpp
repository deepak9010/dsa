
#include <iostream>
#include<queue>
#include<map>
#include<vector>
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



 vector<int> verticalOrder(Node *root,  vector<int> &ans)

    {
        map<int, map<int, vector<int> > > m;
        queue<pair<Node*, pair<int, int> > > q;
        //   vector<int> ans;
          
          if(root==NULL)
              return ans;
              
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node*, pair<int, int> > temp =q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            m[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left)
                  q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1) ));
                  
            if(frontNode->right)
                  q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1) ));       
                  
        }
        for(auto i: m){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(k);
                }
            }
        }
    }


int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
     root->left->left->right = new Node(8);
    root->left->right->left = new Node(9);


   vector<int> ans;

 verticalOrder(root,ans);
 for(auto l:ans){
    cout<<l<<" ";
 }
    return 0;
}

