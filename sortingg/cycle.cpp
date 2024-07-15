
#include<iostream>
using namespace std;


void cyclicSort(int A[], int n)
{
  for(int i=0; i<n; i++){
           while(A[i] != i && A[i] < n)
            {
                swap(A[i], A[A[i]]);
            }
  }
}

int main()
{
  
   
   int n;
   cin>>n;
    int A[100];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
  
    cyclicSort(A,n);
   
     for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}