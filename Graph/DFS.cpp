#include <iostream>
#include <vector>
#include <unordered_map>
#include<queue>
#include <list>
using namespace std;

//  TC is O(N)+ O(2E)    and SC is O(3n) = O(n)

class Solution{
    public:

  void dfs(int node , vector<int> adj[], int vis[], vector<int> &ans){
        vis[node]= 1;
        ans.push_back(node);
        // now,traverse all its neighbours
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it , adj, vis, ans);
            }
        }
    }
    
    
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
         int vis[n] = {0};
         int start =0 ;
         vector <int> ans;
         dfs(start, adj , vis , ans);
         return ans;
    }
};

void addEdge(vector<int> adj[],int u,int v){
 adj[u].push_back(v);
  adj[v].push_back(u);
}


int main(){
   int n,m;
cin>>n>>m;
vector<int> adj[n];

for(int i=0;i<m;i++){
  int u,v;
  cin>>u>>v;

  addEdge(adj,u,v);
}

Solution obj;
vector<int> ans1 = obj.dfsOfGraph(n,adj);
  for (int i=0; i< ans1.size(); i++){
    cout<< ans1[i] << " "; 
  }
cout<<endl;

return 0;
}
