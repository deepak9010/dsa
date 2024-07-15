// most imp. code for insertion and deletion in linked list

#include <iostream>
using namespace std; 

class Node
{
    public:

     int data;
     Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
// struct Node

// {
//     int data;
//     struct Node* next;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };

void printList( Node* head) 
{ 
    Node* temp=head;
    while (temp != NULL) { 
        cout << temp->data <<" "; 
        temp = temp->next; 
  }  
  cout<<"\n";
} 

class Solution{
    public:
    // these are methode of insertion

Node *insertAtBegining(Node *&head, int x) {
       
       Node* temp = new Node(x) ;
       temp -> next = head;
       head= temp ;
       return head;
    }

 Node *insertAtEnd(Node *head, int x)  {
       // Your code here
        Node *newnode=new Node(x);
        if(head==0){
          return newnode;
      }

      Node *cur=head;
      
      while(cur->next!=NULL){
          cur=cur->next;
      }
      cur->next=newnode;
      return head;
   }
    Node * insertAtIndex( Node *head, int val, int index){
     Node *newnode=new Node(val);
     Node * currnode = head;
    int i = 0;

    while (i!=index-1)
    {
        currnode = currnode->next;
        i++;
    }
    // ptr->data = data;
    newnode->next = currnode->next;
    currnode->next = newnode;
    return head;
}
 Node * insertAfterNode( Node *head, Node *currnode,int val){
   
    Node *newnode=new Node(val);
    //  Node * currnode = head;
    // newnode->data=val;
    newnode->next = currnode->next;
   currnode->next = newnode;

    
    return head;
}

// these are methods of deletion
 Node *deletefirst(Node *&head) {
       
       Node* temp = head ;
       head=head-> next;
       free(temp);
       return head;
    }
 Node * deleteAtLast( Node *&head){
     Node *p = head;
     Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

 Node * deleteAtIndex( Node *&head, int index){
     Node *p = head;
     Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}
 Node * deleteAtvalue( Node * head, int value){
    Node *p = head;
    Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

};



 int main()
{
    // Starting with an empty linked list
      Node *head = NULL;
    //  struct Node *head = NULL;
 
    // Adds new element at the
    // beginning of the list
    Solution obj;
    obj.insertAtBegining(head, 10);
    obj.insertAtBegining(head, 12);
    obj.insertAtBegining(head, 14);
    obj.insertAtBegining(head, 15);
   
    printList(head);

    // obj.insertAtEnd(head,23);
    //  printList(head);

    //   obj.insertAtIndex(head,44,2);
    //    printList(head);


    
    // obj.insertAfterNode(head , 3 , 57);
    //   printList(head);    
    //    doubbt in this ,it shows 3 as a wrong method


    // obj.deletefirst(head);
    //   printList(head);

    // obj.deleteAtLast(head);
    // printList(head);

    // obj.deleteAtIndex(head,2);
    // printList(head);

    obj.deleteAtvalue(head,14);
    printList(head);
 
    return 0;
}

