#include<iostream>
using namespace std;

#define n 100
class queue{
    int *arr;
    int front;
    int back;
    
    public:
    queue(){
      arr= new int[n];
     front=-1;
     back=-1;

    }
    void push(int x){
        if(back==n-1){
            cout<<"overrflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1||front>back){
            cout<<"no elelments in the queue"<<endl;
            return;
        }
        front++;

    }

    int peek(){
        if(front==-1||front>back){
            cout<<"no elelments in the queue"<<endl;
            return -1;
        }
        
        return arr[front];

    }


    bool empty(){
        if(front==-1||front>back){
            return true;
        }
        
        return false;

    }


};
int main(){

    queue q;
    q.push(3);
    q.push(8);
    q.push(9);
    q.push(7);



     cout<<q.peek()<<endl;
    q.pop();

     cout<<q.peek()<<endl;
    q.pop();

     cout<<q.peek()<<endl;
    q.pop();

     cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;
    return 0;
}
// class MyQueue {
//     int front, rear;
//     int arr[] = new int[100005];

//     MyQueue() {
//         front = 0;
//         rear = 0;
//     }

//     //Function to push an element x in a queue.
//     void push(int x) {
//         // Your code here
//         arr[rear++] = x;
//     }

//     //Function to pop an element from queue and return that element.
//     int pop() {
//         // Your code here
//         if (front == rear) {
//             return -1;
//         } else {
//             return arr[front++];
//         }
//     }
// };
