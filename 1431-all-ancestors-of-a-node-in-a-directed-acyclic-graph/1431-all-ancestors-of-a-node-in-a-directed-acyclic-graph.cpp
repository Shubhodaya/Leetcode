class Solution {

    private: void f(int st, int node ,vector< vector<int>>&ans,  vector<vector<int>>&adj,vector<int>&vis ){

if(vis[node]==1)return;
vis[node]=1;
 if(st!=node)ans[node].push_back(st);
            
            for( auto it: adj[node]){
                
                    f(st,it,ans,adj,vis);

            }
            return;

    }
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        

        vector< vector<int>>ans(n);

        vector<vector<int>>adj(n);

        for( auto it: edges){
            adj[it[0]].push_back(it[1]);
        }


       for(int i=0;i<n;i++){
        vector<int>vis(n,0);
        f(i,i,ans,adj,vis);
       }


return ans;


    }
};