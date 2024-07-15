
#include <iostream>
using namespace std;
//  s.c of adj. matrix is O(n^2),n is vertex
int main()
{
    
    int n, m;
    cin >> n >> m;
    int adjMat[n + 1][n + 1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // <---for weighted matrix we put weight of edge innstead of 1-->
         adjMat[u][v] = 1; 
        adjMat[v][u] = 1;
    }
    // for weighted graph
    // for (int i = 0; i < m; i++) {
    //     int u, v,wt;
    //     cin >> u >> v>>wt;
    //     adjMat[u][v] = wt;
    //     adjMat[v][u] = wt;
    // }
 
    return 0;
}

