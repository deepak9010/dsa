#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
 int arr[m][n];

 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
 }

 cout<<"matrix is: \n";
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
 }
    return 0;
}