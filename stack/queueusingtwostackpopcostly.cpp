
#include<iostream>
#include<stack>
using namespace std;
 
struct Queue {
    stack<int> s1, s2;
 
    // Enqueue an item to the queue
    void enQueue(int x)
    {
        // Push item into the first stack
        s1.push(x);
    }
 
    // Dequeue an item from the queue
    int deQueue()
    {
        // if both stacks are empty
        if (s1.empty() && s2.empty()) {
            cout << "Q is empty";
            // exit(0);
            return 0;
        }
 
        // if s2 is empty, move
        // elements from s1
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
 
        // return the top item from s2
        int x = s2.top();
        s2.pop();
        return x;
    }

    int peek() {
        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        return x;
    }

    int size()
    {
        return s2.size();
    }

    bool empty(){
        if(s1.empty() && s2.empty())
        return true;
        return false;

    }
};
 
// Driver code
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
   
 
    cout << q.deQueue() << '\n';
     cout<<q.peek()<< '\n';
    cout << q.deQueue() << '\n';
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    
    cout << q.deQueue() << '\n';
    cout<<q.empty()<<endl;
 
    return 0;
}