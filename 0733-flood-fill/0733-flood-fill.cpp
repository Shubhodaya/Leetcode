class Solution {

    private:
       void dfs(pair<int,int>p,vector<vector<int>>& vis,vector<vector<int>>& grid,int ini,int colr){
         
    int row= p.first;
    int col =p.second;
    vis[row][col]=1;
grid[row][col]=colr;
// cout<<row<<" "<<col<<endl;
  
  int dr[4]={-1,0,1,0};
  int dc[4]={0,-1,0,1};
 
 for(int i=0;i<4;i++){
     int nr= row+dr[i];
     int nc=col+dc[i];
     if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && vis[nr][nc]==0 && grid[nr][nc]==ini){
         dfs({nr,nc},vis,grid,ini,colr);
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