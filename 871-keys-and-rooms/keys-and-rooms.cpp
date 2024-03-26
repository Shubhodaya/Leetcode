class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       vector<int>adj[rooms.size()];
       int n=rooms.size();

       for(int i=0;i<n;i++){
        int curr=i;
        for(int j=0;j<rooms[i].size();j++){
            int nr=rooms[i][j];
            adj[curr].push_back(nr); 
        }
       }
       vector<int>vis(n,0);

       function<void(int,int)>f= [&](int curr, int p){
           

           if(vis[curr]==1)return;
           vis[curr]=1;

           for(auto it: adj[curr]){
            if(it==p || it==curr)continue;
            if(vis[it]==0)f(it,curr);
           }

return;
       };
       f(0,0);

       for(auto it:vis)if(it==0)return false;
       return true;

        
    }
};