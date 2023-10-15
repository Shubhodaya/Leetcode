class Solution {
    private:
        bool checkDfs(int V,vector<vector<int>>& adj,int node, vector<int> &vis,vector<int> &path,vector<int> &check){
        
        
        path[node]=1;
        vis[node]=1;
        check[node]=0;
        
        
        for(int i=0;i<adj[node].size();i++){
            
            if(!vis[adj[node][i]]){
                if(checkDfs(V,adj,adj[node][i],vis,path,check))return true;
            }
            else if(path[adj[node][i]])return true;
            
        }
        
        check[node]=1;
        path[node]=0;
        return false;
        
        
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V= graph.size();
               vector<int> path(V,0);
                 vector<int> ans;
                  vector<int> check(V,0);
        vector<int> vis(V,0);
        // code here
        
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                (checkDfs(V,graph,i,vis,path,check));
            }
        }

           for(int i=0;i<V;i++){
         
          if(check[i])ans.push_back(i);
        }
       
       return ans;
    }
};