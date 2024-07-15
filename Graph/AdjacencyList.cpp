#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;
// n is no. of vertex and m  is no. of edges
// 1st method usingg vector


// const int n = 1e3+10;   we can define vector globally but its not a good method
// vector<int> adj[n+1];

// SC is O(2E)

void addEdge(vector<int> adj[],int u,int v){
 adj[u].push_back(v);
  adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int m){
  for(int i=0;i<m;i++){
  cout<<i<<"->";
         for(auto it:adj[i]){
                cout<<it<<" ";
         }
         cout<<endl;
}
}

int main(){
   int n,m;
cin>>n>>m;
vector<int> adj[n+1];

for(int i=0;i<m;i++){
  int u,v;
  cin>>u>>v;

  addEdge(adj,u,v);

}

printGraph(adj,m);

return 0;
}

// <------------------------------------------------------------------------>

// using unordered map

// s.c of adjacency list is O(V+E).v for vertex and e for edge

// class graph{

//  public:
//       unordered_map<int, list<int>> adj;

//    // u and v are vertex
//       void addEdge(int u, int v, bool direction){
//         // direction =0 ->undirected
//         // direction = 1 -> directed graph

//         // create an edge from u  to v
//         adj[u].push_back(v);

//         if(direction== 0){
//               adj[v].push_back(u);
//         }

//       }

//       void printAdjList(){
//              for ( auto i:adj)
//              {
//                 cout<<i.first<<"->";
//                 for(auto j: i.second){
//                     cout<<j<<" ,";
//                 }
//                 cout<<endl;
//              }

//         }
// };

// int main(){
//       int n;
//       cout<<"enter no. of nodes"<<endl;
//       cin>>n;

//       int m;
//       cout<<"enter no. of edges"<<endl;
//       cin>>m;

//       graph g;

//       for(int i=0; i<m; i++){
//         int u,v;
//         cin>>u>>v;
//         // create an undirected graph
//         g.addEdge(u,v,0);
//       }

//       g.printAdjList();

//     return 0;
// }