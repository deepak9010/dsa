#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;



void addEdge(vector<pair<int, int> > adj[],int u,int v,int wt){
//  adj[u].push_back({v, wt});
//   adj[v].push_back({u, wt});

// we can also define like below
 adj[u].push_back(make_pair(v, wt));
 adj[v].push_back(make_pair(u, wt));

}

// void printGraph(vector<int> adj[],int m){
//   for(int i=0;i<m;i++){
//   cout<<i<<"->";
//          for(auto it:adj[i]){
//                 cout<<it.first<< "(" <<it->second << ")" <<"  ";
            
//          }
//          cout<<endl;
// }

// }

int main(){
   int n,m;
cin>>n>>m;
 vector<pair<int, int> > adj[n+1];

for(int i=0;i<m;i++){
  int u,v,wt;
  cin>>u>>v,wt;

  addEdge(adj,u,v,wt);
}

// printGraph(adj,m);

return 0;
}