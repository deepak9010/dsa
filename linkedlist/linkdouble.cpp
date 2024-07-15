#include <iostream>
using namespace std; 


// struct Node
// {
//     int data;
//     struct Node* next;
//     struct Node* prev;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//         prev = NULL;
//     }
// };

class Node{
    public:

    int data;
     Node* next;
     Node* prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void display(Node *head){
    Node* temp=head;
     while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
}

class Solution{
    public:
void  insertAthead(Node* &head,int x){
     Node* newnode = new Node(x) ;
     newnode->next=head;
     if(head!=NULL){
     head->prev=newnode;
     }   
    head=newnode;
    return;
}

void insertAtTail(Node* &head,int x){
    if(head==NULL){
        insertAthead(head,x);
        return;
    }
     Node* newnode = new Node(x) ;
     Node* temp=head;

     while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=newnode;
     newnode->prev=temp;

}


void deleteAthead(Node* &head){
    Node* todelete=head;
    head=head->next;
    head->prev=NULL;

    free(todelete);
}

void deletion(Node* &head, int pos ){

    if(pos==1){
         head = head->next;
          head->prev=NULL;
        free(head);
        return;
    }
    Node* temp=head;
    int count=1;
    while(temp!=NULL&&count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
free(temp);
}

};
int main(){

    Node *head=NULL;
    Solution obj;
    obj.insertAtTail(head, 10);
    obj.insertAtTail(head, 12);
    obj.insertAtTail(head, 14);
    obj.insertAtTail(head, 15);

    display(head);

    obj.insertAthead(head,5);
    display(head);

  obj.deleteAthead(head);
  display(head);

  obj.deletion(head,2);
  display(head);
    return 0;
}