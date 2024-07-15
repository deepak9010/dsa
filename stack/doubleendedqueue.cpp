


// babbar


#include<iostream>
using namespace std;

// #define n 100
class Dequeue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
       Dequeue(){
    //   arr= new int[n];
     arr=new int[size];
     front=-1;
     rear=-1;
    }


bool isFull()
{
    return ( (front == 0 && rear == size-1) ||  (front!=0 && rear==(front-1)%(size-1)) );
}
bool isEmpty ()
{
    return (front == -1);
}

void pushfront(int value)
{
    // check whether Deque if  full or not
    if (isFull())
    {
        cout << "Overflow\n" << endl;
        return;
    }
 
    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
 
    // front is at first position of queue
    else if (front == 0)
        front = size - 1 ;
 
    else // decrement front end by '1'
        front--;
 
    // insert current element into Deque
    arr[front] = value;
}

void pushrear(int value)
{
    if (isFull())
    {
        cout << " Overflow\n " << endl;
        return;
    }
 
    // If queue is initially empty
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
 
    // rear is at last position of queue
    else if (rear == size-1 && front !=0)
        rear = 0;
 
    // increment rear end by '1'
    else
        rear = rear++;
 
    // insert current element into Deque
    arr[rear] = value ;
}

// Deletes element at front end of Deque
void popfront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << "Queue Underflow\n" << endl;
        return ;
    }
 
    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    
        // back to initial position
    else if (front == size -1){
           front = 0;
    }
 
    else  {   // increment front by '1' to remove current front value from Deque 
        front++;
        }          

}
 
// Delete element at rear end of Deque
void poprear()
{
    if (isEmpty())
    {
        cout << " Underflow\n" << endl ;
        return ;
    }

    // Deque has only one element
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size-1;
    else{
        rear = rear--;
    }
        
}
 
 int getFront()
{
    // check whether Deque is empty or not
    if (isEmpty())
    {
        cout << " Underflow\n" << endl;
        return -1 ;
    }
    return arr[front];
}
 
// function return rear element of Deque
int getRear()
{
    // check whether Deque is empty or not
    if(isEmpty() || rear < 0)
    {
        cout << " Underflow\n" << endl;
        return -1 ;
    }
    return arr[rear];
}
 
};

int main(){

      Dequeue q;
      q.pushfront(4);
      q.pushfront(56);
      q.pushfront(23);
      q.pushfront(11);
     cout<<q.getFront()<<endl;
     cout<<q.getRear()<<endl;

    q.popfront();
     cout<<q.getFront()<<endl;

     q.poprear();
     cout<<q.getRear()<<endl;
 


    q.pushrear(89);
  

    return 0;
}