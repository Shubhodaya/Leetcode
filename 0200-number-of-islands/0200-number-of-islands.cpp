class Solution {

    void dfs(pair<int,int>p,vector<vector<int>>& vis,vector<vector<char>>& grid){
         
    int row= p.first;
    int col =p.second;
    vis[row][col]=1;

    for(int dr=-1;dr<=1;dr++){
        int nr=row+dr;
        if(nr>=0 && nr<grid.size()){
        if(grid[nr][col]=='1'&& vis[nr][col]==0){
            dfs({nr,col},vis,grid);
        }
        }
    }
    
    for(int dc=-1;dc<=1;dc++){
        int nc=col+dc;
        if(nc>=0 && nc<grid[0].size()){
        if(grid[row][nc]=='1'&& vis[row][nc]==0){
            dfs({row,nc},vis,grid);
        }
        }
    }



    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    ans++;
                    pair<int,int>p;
                    p.first=i;
                    p.second=j;
                    dfs(p, vis, grid);
                }
            }
        }
        return ans;
        
    }
};