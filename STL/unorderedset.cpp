
#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;


void print(unordered_set<string> &s){
    cout<<s.size()<<endl;
    for(auto &pr: s){
        cout<< pr<<endl;
    }
}

int main(){
    unordered_set <string> s;
    // T.C of insertion in set is O(1)

     s.insert("deepak");
     s.insert("ram");
     s.insert("krishna");
     s.insert("hanuman");
     print (s);


// find operation
     // time comp. of find and erase is O(1)
            //  auto it =s.find("deepak");
            //  if(it!=s.end()){
            //      s.erase(it);
            //  }
            //     print (s);

// or
s.erase("deepak");
print(s);

}