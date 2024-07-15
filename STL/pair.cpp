#include <iostream>
#include <utility>
using namespace std;

int main(){
    pair<int,string> p;
    // 1st method
    //  p = make_pair(2 , "deepak");

    //  2nd method
    // p={3, "krishna"};
 
    // 3rd method
    p.first=4;
    p.second="ram";

     cout<<p.first<<" "<<p.second<<endl;

    //  we can  copy pair 
    pair<int,string> &p1=p;
    p1.first=23;
         cout<<p.first<<" "<<p.second<<endl;


}