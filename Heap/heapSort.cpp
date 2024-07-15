#include<iostream>
using namespace std;


void print(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}



void heapify(int arr[], int n, int i){
    int largest = i;
    int left = (2*i) +1;
    int right = (2*i) +2;

    if(left<n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right<n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr ,  n, largest);
    }
}

void heapsort(int arr[], int n){
    // int lastnode = n-1;
    // while(lastnode > 0){
    //     swap( arr[0], arr[lastnode]);
    //    heapify(arr, lastnode, 0);   
    //     lastnode--;
    // }
    // another way
       for (int i = n - 1; i > 0; i--) {
            // Move current root to end
        swap(arr[0], arr[i]);
           // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main(){ 
    

   int arr[] = {54, 53, 55, 52, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

//    build heap
    for(int i= (n/2) -1; i>=0; i--){
    heapify(arr, n, i);
   }

   cout<<"heapify array"<< endl;

 print(arr, n);

 heapsort(arr, n);
 print(arr, n);
 
    return 0;
}