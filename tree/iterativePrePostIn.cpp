  #include <iostream>
  #include<vector>
  #include<stack>
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
// preoder
    void Preorder(Node* root) {
        if(root==NULL){
            return;
        }
        
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            cout<<root->data<<" ";

            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return;
    }


//    inorder
     void inorder(Node* root) {
        
        if(!root)return ;

         stack<Node*>st;
         Node* node=root;

         while(!st.empty() || node){
             while(node != NULL){
                 st.push(node);
                 node=node->left;
             }
             node=st.top();
             cout<<node->data<<" ";
             st.pop();
             node=node->right;
         }
    
     }

    //  postorder using 2 stack
        void Postorder(Node* root) {
       if(root==NULL)return;

        stack<Node*> st1,st2;
        st1.push(root);

        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL){
                st1.push(root->left);
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
        }

        while(!st2.empty()){
            cout<<st2.top()->data<<" ";
            st2.pop();
        }
        return ;
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
   inorder(root);


    cout<<endl; 

  cout<<"postorder traversal"<<endl;
  Postorder(root);

    return 0;
} 