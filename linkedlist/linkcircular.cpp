#include <iostream>
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void display( Node* head) 
{ 
    Node *temp=head;

if(head != NULL){
    do{ 
        cout << temp->data <<" "; 
        temp = temp->next; 
  }  while (temp != head);
   cout<<endl;
}
} 
class Solution{
    public:
     Node* insertAtFirst(Node* &head ,int x){
          Node* newnode = new Node(x);
          newnode->data=x;

        if(head==NULL){
          newnode->next=NULL;
          head=newnode;
          return head ;
        }
    Node *curnode=head;

       while(curnode->next != head){
        curnode = curnode->next;
          }
           // At this point p points to the last node of this circular linked list
       curnode->next=newnode;
       newnode->next=head;
       head=newnode;
   
       return head;
  }
 
   void insertAtTail(Node* &head,int x){
        Node* newnode = new Node(x) ;
    if(head==NULL){
      insertAtFirst(head,x);
      return;
    }
   Node*curnode=head;
   while(curnode->next != head){
    curnode=curnode->next;
   }
   curnode->next=newnode;
   newnode->next=head;
   return;
  }
   
};

int main(){
     struct Node *head = NULL;
    Solution obj;
    obj.insertAtFirst(head, 10);
    obj.insertAtFirst(head, 12); 
    obj.insertAtFirst(head, 14);
    obj.insertAtFirst(head, 15);
    display(head);
    
    // obj.insertAtTail(head,78);
    // display(head);
   return 0;
}
