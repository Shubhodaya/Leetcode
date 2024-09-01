class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {

        vector<int>vis(n,0);
        vector<vector<int>>adj(n);

 

        queue<int>q;
        

        vector<int>ind(n,0);

        for( int i=0;i<pre.size();i++){
            ind[pre[i][0]]++;
            adj[pre[i][1]].push_back(pre[i][0]);
        }
vector<int>v;
        for( int i=0;i<n;i++){
            if(ind[i]==0){
                // c++;
           q.push(i);
            vis[i]=1;
            }
        }



        while(!q.empty()){

            int newn=q.front();
            v.push_back(newn);
            q.pop();

            for( auto it:adj[newn]){
                ind[it]--;
                if(ind[it]==0 && vis[it]==0)
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }

        for( auto it:v)cout<<it<<" ";
if(v.size()!=n)return false;
        return true;
        
    }
};