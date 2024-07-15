#include<iostream>
#include<algorithm>
#include <vector>


// this comparator func is a stl part used for sorting acc. to us. We use it when we want to define custom behaviour
using namespace std;
 
 bool cmp(int a, int b){
    return a<b;
 }

int main(){
    int n;
    cin>>n;

    vector <int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    std::sort(a.begin() ,a.end(),cmp);

   for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}