
// babbar

#include<iostream>
using namespace std;

// #define n 100
class Circularqueue{
    int *arr;
    int front;
    int back;
    int size;
    
    public:
    Circularqueue(){
    //   arr= new int[n];
     arr=new int[size];
     front=-1;
     back=-1;

    }
    
void push(int value)
{
    if ((front == 0 && back == size-1) ||
            (back == (front-1)%(size-1)))
    {
        printf("\nQueue is Full");
        return;
    }
 
    else if (front == -1) /* Insert First Element */
    {
        front = back = 0;
        arr[back] = value;
    }
 
    else if (back == size-1 && front != 0)
    {
        back = 0;
        arr[back] = value;
    }
 
    else
    {
        back++;
        arr[back] = value;
    }
}

int deQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return -1;
    }
 
    int data = arr[front];
    arr[front] = -1;
    if (front == back)
    {
        front = -1;
        back = -1;
    }
    else if (front == size-1){
        front = 0;
    }
    else{
        front++;
    }
 
    return data;
}

void displayQueue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (back >= front)
    {
        for (int i = front; i <= back; i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        for (int i = front; i < size; i++)
              cout<<arr[i]<<" ";
 
        for (int i = 0; i <= back; i++)
              cout<<arr[i]<<" ";
    }
}
};
int main()
{
   Circularqueue q;
 
    // Inserting elements in Circular Queue
    q.push(14);
    q.push(22);
    q.push(13);
    q.push(-6);
 
    // Display elements present in Circular Queue
    q.displayQueue();
    cout<<endl;
 
    // Deleting elements from Circular Queue
    // printf("\nDeleted value = %d", q.deQueue());
    // printf("\nDeleted value = %d", q.deQueue());
    cout<<q.deQueue()<<" ";
     cout<<q.deQueue();
     cout<<endl;
 
    q.displayQueue();
 
    q.push(9);
    q.push(20);
    q.push(5);
 
    q.displayQueue();
 
    
    return 0;
}