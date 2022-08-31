//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs_cycle(vector<int> adj[],vector<bool>& vis,int s,int prev){
       if(vis[s]){
           return true;
       }
       vis[s]=true;
       for(int i=0;i<adj[s].size();++i){
           if((adj[s][i]!=prev) && dfs_cycle(adj,vis,adj[s][i],s))
               return true;
       }
       return false;
   }
   // Function to detect cycle in an undirected graph.
   bool isCycle(int V, vector<int> adj[]) {
       vector<bool> vis(V,false);
       for(int i=0;i<V;++i){
           if(!vis[i]){
               if(dfs_cycle(adj,vis,i,V))
                   return true;
           }
       }
       return false;
   }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends