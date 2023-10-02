class Solution {

    private:
       void dfs(pair<int,int>p,vector<vector<int>>& vis,vector<vector<int>>& grid,int ini,int colr){
         
    int row= p.first;
    int col =p.second;
    vis[row][col]=1;
grid[row][col]=colr;
cout<<row<<" "<<col<<endl;
    for(int dr=-1;dr<=1;dr++){
        int nr=row+dr;
        if(nr>=0 && nr<grid.size()){
        if(grid[nr][col]==ini && vis[nr][col]==0){
            // grid[nr][col]=colr;
            dfs({nr,col},vis,grid,ini,colr);
        }
        }
    }
    
    for(int dc=-1;dc<=1;dc++){
        int nc=col+dc;
        if(nc>=0 && nc<grid[0].size()){
        if(grid[row][nc]==ini && vis[row][nc]==0){
            // grid[row][nc]=colr;
            dfs({row,nc},vis,grid,ini,colr);
        }
        }
    }



    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ini=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        dfs({sr,sc},vis,image,ini,color);
        return image;



        
    }
};