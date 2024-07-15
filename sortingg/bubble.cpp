#include<iostream>
using namespace std;
// using function ,it doesn't work
//  int bubblesort(int arr[],int n){
 
//   int counter=1;
//   while(counter<n){
//     for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//     }
//    counter ++;
//  }
//  }
int main(){
     int n;
    cin>>n;
    int arr[100];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
 

int counter=1;
  while(counter<n){
    for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
               int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
    }
   counter ++;
 }
                      // or
//  int counter=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-counter;j++){
//             if(arr[j]>arr[j+1]){
//                int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//         counter++;
//     }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}
