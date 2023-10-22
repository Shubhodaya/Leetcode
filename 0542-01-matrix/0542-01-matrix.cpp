class Solution {
    private:
    int bfs(pair<int,int>p,vector<vector<int>>& mat){
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        q.push({p,0});
        vis[p.first][p.second]=1;
        int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};
        int count =1e9;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int l=q.front().second;
            q.pop();
             
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                

                if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 ){
                    if(mat[nr][nc]==0){
count =min(count,l+1);

break;
                    }
                    else{
                        q.push({{nr,nc},l+1});
                        vis[nr][nc]=1;
                        
                    }
                }
            }
        }
        return count;
    }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;

vector<vector<int>>ans(n,vector<int>(m,0));
vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                q.push({{i,j},0});
                ans[i][j]=0;
                }
            }
        }


  int dr[4]={-1,0,1,0};
        int dc[4]={0,-1,0,1};

 
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int l=q.front().second;
             ans[r][c]=l;
            q.pop();
             
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                

                if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && mat[nr][nc]==1){
 vis[nr][nc]=1;
q.push({{nr,nc},l+1});
                }
            }
        }

        return ans;
        
    }
};