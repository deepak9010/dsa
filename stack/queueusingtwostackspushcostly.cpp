#include<iostream>
#include<stack>
using namespace std;
//  TC is O(n) and SC is O(2n)
struct Queue {
    stack<int> s1, s2;
 
    void enQueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
 
        // Push item into s1
        s1.push(x);
 
        // Push everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
 
    // Dequeue an item from the queue
    int deQueue()
    {
        // if first stack is empty
        if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }
 
        // Return top of s1
        int x = s1.top();
        s1.pop();
        return x;
    }

      
    int size()
    {
        return s1.size();
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
    cout << q.deQueue() << '\n';
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    
    cout << q.deQueue() << '\n';
    cout<<q.empty()<<endl;
    return 0;
}