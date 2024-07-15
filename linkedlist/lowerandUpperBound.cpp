#include <iostream>
#include <algorithm> // for lower_bound, upper_bound and sort
#include <vector> // for vector

using namespace std;

int main(){
  int n;
cin>>n;
vector<int> v(n);

for(int i=0; i<n; i++){
    cin>>v[i];
}

sort(v.begin(), v.end());

for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}

cout<<endl;
}

// auto lower = lower_bound(v.begin(),v.end(),5); //5 is x means x is that for which we found bound
//   if(lower == v.end()){
//     cout<<"not found";
//     return 0;
//   }
//  cout<< (lower - v.begin())<<endl; //it return index
//  cout<< (*lower)<<endl; // it return value
// }

// auto upper = upper_bound(v.begin(),v.end(),5); //5 is x means x is that for which we found bound
//   if(upper == v.end()){
//     cout<<"not found";
//     return 0;
//   }
//   cout<< (upper - v.begin())<<endl; //it return index
//  cout<< (*upper)<<endl; // it return value

// }




// if array instead of vectoe then syntax is like that
// for index
// int lower = lower_bound(arr, arr+n, x)-a; 

// for value
// int lower = lower_bound(arr, arr+n, x); 