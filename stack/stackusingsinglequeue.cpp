
#include<iostream>
 #include<queue>
using namespace std;
//   only follow push costly method
// TC is O(n) and SC is O(n)
class Stack {
     queue<int> q;
 
public:
    void push(int x)
    {
      
        q.push(x);
 
       for(int i=0; i<q.size()-1;i++){
        q.push(q.front());
        q.pop();
       }
       
    }
 
    void pop()
    {
        // if no elements are there in q1
        if (q.empty())
            return ;
        q.pop();
    }
 
    int top()
    {
        if (q.empty())
            return -1;
        return q.front();
    }
 
    int size()
    {
        return q.size();
    }
};
 
// Driver code
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
 
    cout << "current size: " << s.size()
         << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
 
    cout << "current size: " << s.size()
         << endl;
    return 0;
}