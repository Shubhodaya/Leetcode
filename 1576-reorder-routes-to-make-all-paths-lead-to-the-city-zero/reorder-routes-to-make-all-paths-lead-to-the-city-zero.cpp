class Solution {
public:
    int minReorder(int n, vector<vector<int>>& con) {

        vector<int>adj[n],adj1[n];
        vector<int>vis(n,0);

        for(int i=0;i<n-1;i++){

            int a=con[i][0];
            int b=con[i][1];
            adj[a].push_back(b);
            adj1[b].push_back(a);
        }
int s=0;

        function<void(int,bool)>f=[&](int i,bool d){

            if(vis[i]==1)return;
            vis[i]=1;

           for(auto it:adj[i]){
            if(!d && !vis[it])s++;
            f(it,d);    
           }
               for(auto it:adj1[i]){
                if(d && !vis[it])s++;
            f(it,d);
            // s++;
           }
           return;

        };f(0,0);
return s;
        
    }
};