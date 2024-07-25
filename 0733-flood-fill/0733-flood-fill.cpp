class Solution {
    private : void f(int i, int j,int ac, vector<vector<int>>& image,int color,vector<vector<int>>& vis){
        if(vis[i][j])return;
     image[i][j]=color;
     vis[i][j]=1;
             int n= image.size();
         int m= image[0].size();
     if(i+1<n && image[i+1][j]==ac)f(i+1,j,ac,image,color,vis);
       if(j+1<m && image[i][j+1]==ac)f(i,j+1,ac,image,color,vis);
         if(i-1>=0 && image[i-1][j]==ac)f(i-1,j,ac,image,color,vis);
           if(j-1>=0 && image[i][j-1]==ac)f(i,j-1,ac,image,color,vis);

return;
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n= image.size();
         int m= image[0].size();
int ac=image[sr][sc];
        vector<vector<int>>vis( n, vector<int>(m,0));
        f(sr,sc,ac,image,color,vis);
        return image;
    }
};