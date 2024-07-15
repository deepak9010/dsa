#include<iostream>
using namespace std;


int fact(int n){
    if(n==0){
        return 1;
    }

    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<fact(n);

}

// imp.

// two steps for find time complexity
// step-1: no. of functions call->    here total no. functions are called n time
//  step-2: what is the time comp. of each function ->     t.c of each function is O(1) 
//  so final result is n*1  = O(n),hence T.C of this ques. is O(n)