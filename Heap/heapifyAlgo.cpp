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
        // largest = left;

          swap(arr[largest] , arr[left]);
          largest = left;
         heapify(arr ,  n, largest);
    }
    if(right<n && arr[largest] < arr[right]){
        // largest = right;

          swap(arr[largest] , arr[right]);
          largest = right;
          heapify(arr ,  n, largest);
    }

    // if(largest != i){
    //     swap(arr[largest] , arr[i]);
    //     heapify(arr ,  n, largest);
    // }
}
int main(){ 
    

   int arr[] = {54, 53, 55, 52, 50};
    int n = sizeof(arr) / sizeof(arr[0]);


    for(int i= (n/2) -1; i>=0; i--){
    heapify(arr, n, i);
   }
   cout<<"heapify array"<< endl;

 print(arr, n);
 
    return 0;
}