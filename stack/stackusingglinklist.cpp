#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
     Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *top)
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

class Solution
{
public:
    void push(Node *&top, int x)
    {
        Node *temp = new Node(x);
        
        if(top==NULL){
            top=temp;
            return;
        }
            else{
            temp->data=x;
            temp->next=top;
            top=temp;
            }

    }

  int pop(Node *&top){
  
    Node* temp=top;
         if(top==NULL){
            return -1;
         }
         else{
            int res=temp->data;
            top=top->next;
             free(temp);
           return res;
         }
  }  
};


int main()
{
     Node *top = NULL;
    Solution ob;
    ob.push(top,3);
    ob.push(top,5);
    ob.push(top,6);
    ob.push(top,7);
    printList(top);

    ob.pop(top);
    cout<<ob.pop(top)<<endl;
    printList(top);
    return 0;
}