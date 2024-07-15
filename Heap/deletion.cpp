#include<iostream>
using namespace std;

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

// Deletion from Maxheap
void(deletefromHeap()){
    if(size == 0){
        cout<< "nothing to delete"<<endl;
        return ;
    }

     // step1:put last element into first element
     arr[0]= arr[size-1];
     //  as we put last into first index then size will decrease
     size--; 

      //  take root  node to its correct position
     int i=0;
     while(i < size -1){
        int leftIndex= (2*i)+1;
        int rightIndex= (2*i)+2;

        if(leftIndex < size && arr[i] < arr[leftIndex]){
            swap(arr[i] , arr[leftIndex]);
            i = leftIndex;
        }
        else if(rightIndex < size && arr[i] <arr[rightIndex]){
            swap(arr[i] , arr[rightIndex]);
            i = rightIndex;
        }
        else{
            return;
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

    h.deletefromHeap();
    h.print();
    return 0;
}