
#include <iostream>
#include <set>
using namespace std;


void print(set<string> &s){
    cout<<s.size()<<endl;
    for(auto &pr: s){
        cout<< pr<<endl;
    }
}

int main(){
    set <string> s;
    // T.C of insertion in set is O(log(n))

     s.insert("deepak");
     s.insert("ram");
     s.insert("krishna");
     s.insert("Abhay");
     s.insert("hanuman");
     print (s);


// find operation
     // time comp. of findand erase is O(log(n))
             // auto it =s.find("deepak");
             // if(it!=s.end()){
             //     s.erase(it);
             // }
             //    print (s);

// or
s.erase("deepak");
print(s);

}