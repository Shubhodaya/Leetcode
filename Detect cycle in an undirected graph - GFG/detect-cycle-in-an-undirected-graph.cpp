//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
        bool cycle(int src, vector<int> adj[], vector<int> &vis) {
        // Code here
        
        queue<int>q;
        unordered_map<int,int>m;
        q.push(src);
        
        vis[src]=1;
        
        while(!q.empty()){
            int cur= q.front();
            q.pop();
            
            
            for(int i=0;i<adj[cur].size();i++){
                
                int node=adj[cur][i];
                if(vis[node]==0){
                    q.push(node);
                    vis[node]=1;
                    m[node]=cur;
                }
                else if(m[cur]!=node)return true;
            }
        }
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // int vis[V]={0};
        vector<int>vis(V,0);
        
for(int i=0;i<V;i++){
    if(vis[i]==0){
        if(cycle(i,adj,vis))return true;
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