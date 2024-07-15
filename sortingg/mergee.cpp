#include<iostream>
using namespace std;


void merge(int A[], int mid, int low, int high)
{

    // here high denotes the n-1 index,agar hmaare pass n kaafi badaa h to hum ese bhi likh sakte h
    //   int i, j, k, B[high+1];

    // ya fir ese
     //  const int n=500000;
        //  int i, j, k, B[n];
        
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    // int A[] = {9, 1, 4, 14, 4, 15, 6};
    // int n = 7;
     int n;
   cin>>n;
    int A[100];
    for (int i = 0; i < n; i++)
    {
            cin>>A[i];
    }
    
    mergeSort(A, 0, n-1);
   
    for (int i = 0; i < n; i++)
    {
            cout<<A[i]<<" ";
    }
    return 0;
}
