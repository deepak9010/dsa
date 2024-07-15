#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(10);
    q.push(-3);
    q.push(9);

    cout << q.empty() << endl;
    cout << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    cout << q.size() << endl;

    q.pop();
    cout << q.empty() << endl;
    cout << q.size() << endl;
}
