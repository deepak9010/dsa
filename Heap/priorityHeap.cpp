#include<iostream>
#include<queue>
using namespace std;

int main(){ 
    // maxheap
     priority_queue<int> pq;

     pq.push(4);
     pq.push(2);
     pq.push(5);
     pq.push(3);

     cout<<pq.top()<<endl;

     while(!pq.empty()){
        cout<< pq.top()<<" ";
        pq.pop();
     }
 cout<<endl;
    //  minheap
    priority_queue<int, vector<int>, greater<int> > minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

      cout<< minheap.top()<<endl;

     while(!minheap.empty()){
        cout<< minheap.top()<<" ";
        minheap.pop();
     }
    return 0;
}