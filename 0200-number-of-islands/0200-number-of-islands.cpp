class Solution {

    void dfs(int i, int j,vector<vector<char>>& grid,vector<vector<int>>& vis){

    int n=grid.size(),m=grid[0].size();    
if(i>=n || j>=m || i<0 || j<0)return;
if(grid[i][j]=='0')return;
        if(vis[i][j])return;

        vis[i][j]=1;

dfs(i+1,j,grid,vis);
dfs(i-1,j,grid,vis);
dfs(i,j+1,grid,vis);
dfs(i,j-1,grid,vis);

    return;

    }
public:
    int numIslands(vector<vector<char>>& grid) {

        int c=0;
    int n=grid.size(),m=grid[0].size();  
    vector<vector<int>>vis(n,vector<int>(m,0));

        for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
if(grid[i][j]=='1' &&  vis[i][j]==0){dfs(i,j,grid,vis);c++;}

            }
        }

        return c;
        
    }
};