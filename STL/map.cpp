#include <iostream>
#include <iterator>
#include <map>
using namespace std;


void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr: m){
        cout<< pr.first<< " "<< pr.second <<" "<<endl;
    }
}
int main(){
    map<int,string> m;
    // 1st method to insert
    // time comp. of insertion is O(log(n))
    m[1]="deepak";  
    m[2]="moepak";  
    m[5]="ram";
    m[3]="krishna";

    // 2nd method to insert
    m.insert({4, "hanuman"});
    print(m);

    // find operation
     // time comp. of find is O(log(n))
    // auto it =m.find(5);
    // if(it==m.end()){
    //     cout<<"no value";
    // }
    // else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

   cout<<endl;
// erase option,it is done by two types
 // time comp. of erase is O(log(n))
       // 1st,using key
           // m.erase(3);
           //   print(m);

       //2nd,using iterator
       auto it = m.find(3);
       m.erase(it);    
         print(m);

}