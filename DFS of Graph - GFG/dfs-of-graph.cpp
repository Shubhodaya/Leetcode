//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    
    void dfs(int node, vector<int>adj[], vector<int> &ans, vector<int> &vis){
        
        ans.push_back(node);
        vis[node]=1;
        
        for(auto it: adj[node]){
            
            if(vis[it]==0){
                dfs(it,adj,ans,vis);
            }
        }
    }
    
    
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>ans;
        vector<int> vis(V,0);
        // dfs(0,adj,ans,vis);
        // return ans;\
        
        stack<int> s;
        
        s.push(0);
    
        while(!s.empty()){
            int curr=s.top();
            s.pop();
            
            
            if(vis[curr]==0){
                
            ans.push_back(curr);
            vis[curr]=1;
            }
            
            
            for(int i=adj[curr].size()-1; i>=0;i--){
                
                if(vis[adj[curr][i]]==0)
                s.push(adj[curr][i]);
            }
            
        }
        
        return ans;
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