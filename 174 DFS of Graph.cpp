//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
   vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V+1,false);
        vector<int> ans;
        for(int i=0;i<V;i++){
            vector<int> res;
            if(visited[i]==false){
                bfs(adj,visited,i,ans);
            }
            
        }
        return ans;
    }
    
    void bfs(vector<int> adj[],vector<bool> &visited,int start,vector<int> &ans){
        visited[start]=true;
        ans.push_back(start);
        for(auto x: adj[start]){
            if(visited[x]==false){
                bfs(adj,visited,x,ans);
            }
        }
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends