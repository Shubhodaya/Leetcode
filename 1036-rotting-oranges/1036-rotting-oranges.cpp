class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(grid[i][j]==2){
                     vis[i][j]=1;
                     q.push({{i,j},0});
                 }
                 else
                 vis[i][j]=0;

            }
        }
        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};
        int time = 0;


        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
             time=max(time,t);
             q.pop();

             for(int i=0;i<4;i++){
                 int nr= row+dr[i];
                 int nc= col+dc[i];

                 if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1){
                     q.push({{nr,nc},t+1});
                     vis[nr][nc]=1;
                 }
             }


        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1)return -1;
            }
        }

        return time;




        
    }
};