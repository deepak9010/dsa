#include<iostream>
using namespace std;


int binarysearch(int arr[] ,int s ,int e, int k){
    // if(s>e)
    // return -1;
while(s<=e){
   int mid= s + (e - s)/2;

    if(arr[mid] == k){
        return mid;
    }

   if( k < arr[mid] ){
     return  binarysearch(arr,s,mid-1,k);
   }
    
    else{
       return binarysearch(arr , mid+1 ,e, k);
        
    }
    }  

    return -1;
}


int main(){
    int arr[]={3,4,6,7,8};
   int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<binarysearch(arr,0,n-1,key);

   
    return 0;
}