#include <iostream>
using namespace std; 

// #define n=1000;
class stack{
    int *arr;
    int top;
    int n=100;

public:
 stack(){
    arr=new int[n];
    top=-1;
 }



 void push(int x){
    if(top==n-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
 }
 void pop(){
    if(top==-1){
        cout<<"no elements to pop"<<endl;
        return;
    }
    top--;
 }
int topelement(){
    if(top==-1){
        cout<<"no element in stack"<<endl;
        return -1;
    }
    return arr[top];
}
bool empty(){
    return top==-1;
    }

void display(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
}
  
};

int main(){
    stack st;
    st.push(3);
    st.push(5);
     st.push(6);
    st.push(7);
    cout<<st.topelement()<<endl;
    st.display();

    cout<<endl;

    st.pop();
    cout<<st.topelement()<<endl;
     st.display();
     cout<<endl;


     st.pop();
     st.display();
     cout<<endl;
      st.pop();
     cout<<st.topelement()<<endl;  
       st.pop();
       cout<<st.topelement()<<endl; 
       cout<<st.empty();

}

