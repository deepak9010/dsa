#include<iostream>
using namespace std;
// implementation in maxheap
class Maxheap{
       public:
       int * arr;
       int size;
       int capacity;
  
  Maxheap(int c){
    arr= new int[c]; 
    size =0;
    capacity=c;
  }

void insert(int val){
    if(size == capacity){
        cout<<"\nOverflow\n";
    }
    size= size+1;
    int index = size-1;
    arr[index] = val;

    while(index>0){
        int parent = (index-1)/2;
  //min heap do,   if(arr[parent] > arr[index]){ 
        if(arr[parent] < arr[index]){
            swap(arr[parent] ,  arr[index]);
            index = parent;
        }
        else{
            return ;
        }
    }
}

void print(){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

};
int main(){ 
    Maxheap h(5);
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    return 0;
}