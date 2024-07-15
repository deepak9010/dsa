#include <iostream>
#include <vector>
using namespace std;


// void printvec(vector<int> &v){
//     cout<< "size: "<<v.size()<<endl;
//     for(int i=0; i<v.size(); ++i){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector <int> v;
//     int n; 
//     cin>>n;
//     for(int i=0;i<n; ++i){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     printvec(v);

//     v.pop_back();
//     printvec(v);
// }


// another methos to print 
int main(){
    vector <int> v;
    int n; 
    cin>>n;
    for(int i=0;i<n; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
     
    //  using iterator
    // vector<int> ::iterator it=v.begin();
    // for(it=v.begin(); it!=v.end(); ++it){
    //     cout<<(*it)<<endl;
    // }


    //  using iterator with autokeyword
   
    // for(auto it=v.begin(); it!=v.end(); ++it){
    //     cout<<(*it)<<endl;
    // }

   
//    using range based loop
    for(int &value : v){
        cout<<value<<" ";
    }


// it is the best method
//    using range based loop with auto keyword
    for(auto &value : v){
        cout<<value<<" ";
    }
}
