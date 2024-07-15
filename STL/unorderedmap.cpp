#include <iostream>
#include <iterator>
#include <unordered_map>
using namespace std;

// inbuilt implementatation- it uses hash table to create

void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr: m){
        cout<< pr.first<< " "<< pr.second <<" "<<endl;
    }
}
int main(){
    unordered_map<int,string> m;
     // time comp. of insertion is O(1)
    // 1st method to insert
    m[1]="deepak";
    m[5]="ram";
    m[3]="krishna";

    // 2nd method to insert
    m.insert({4, "hanuman"});
    print(m);

    // find operation
      // time comp. of find is O(1)
    // auto it =m.find(5);
    // if(it==m.end()){
    //     cout<<"no value";
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

//    cout<<endl;
// erase option,it is done by two types
  // time comp. of erase is O(1)
       // 1st,using key
           m.erase(3);
             print(m);

       //2nd,using iterator
    //    auto it = m.find(3);
    //    m.erase(it);    
    //      print(m);

}