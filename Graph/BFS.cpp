#include <iostream>
#include <vector>
#include <unordered_map>
#include<queue>
#include <list>
using namespace std;

//  TC is O(N)+ O(2E)    and SC is O(3n) = O(n)
class Solution{
    public:

vector<int> bfsOfGraph(int n, vector<int> adj[]) {
  // for 0 base indexing graph
        int vis[n]={0};
        vis[0]=1;
        
        queue<int> q;
        q.push(0);
        
        vector<int> bfs;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto it: adj[node]) {
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
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
vector<int> ans = obj.bfsOfGraph(n,adj);
  for (int i=0; i< ans.size(); i++){
    cout<< ans[i] << " ";
  }
cout<<endl;

return 0;
}
