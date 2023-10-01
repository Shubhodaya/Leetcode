class Solution {

    private:
    void bfs(int node, vector<int>&vis,vector<vector<int>> isConnected){
 
queue<int> q;
vis[node]=1;
q.push(node);
   int n= isConnected[0].size();

while(!q.empty()){
    int nd= q.front();
    q.pop();
    for(int i=0;i<n;i++){
        if(isConnected[nd][i]==1 && vis[i]!=1){
            vis[i]=1;
            q.push(i);
        }
    }
}

    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected[0].size();
        vector<int> vis(n,0);
       int ans=0;
       for(int i =0;i<n;i++){

           if(vis[i]==0){
             ans++;
             bfs(i,vis,isConnected);
           }
       }

       return ans;

        
    }
};