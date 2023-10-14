class Solution {
public:

void dfs(int row,int col,vector<vector<char>>& board,vector<vector<char>>& ans,vector<vector<int>>& vis){
             
       int n=board.size();
        int m= board[0].size();
ans[row][col]='O';
            int dr[4]={-1,0,1,0};
            int dc[4]={0,-1,0,1};

            for(int i=0;i<4;i++){
                
                    int nr=row+dr[i];
                    int nc=col+dc[i];
                    
                    if( nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && board[nr][nc]=='O'){
                        vis[nr][nc]=1;
                        // ans[nr][nc]='O';
                        dfs(nr,nc,board,ans,vis);  
                          }
            }
            
}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m= board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));

        vector<vector<char>>ans(n,vector<char>(m,'X'));

        for(int i=0;i<n;i++){
            if(board[i][0]=='O'&& vis[i][0]==0){
              vis[i][0]=1;
              dfs(i,0,board,ans,vis);
            }
        }
        for(int i=0;i<m;i++){
            if(board[0][i]=='O'&& vis[0][i]==0){
              vis[0][i]=1;
              dfs(0,i,board,ans,vis);
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][m-1]=='O'&& vis[i][m-1]==0){
              vis[i][m-1]=1;
              dfs(i,m-1,board,ans,vis);
            }
        }
        for(int i=0;i<m;i++){
            if(board[n-1][i]=='O'&& vis[n-1][i]==0){
              vis[n-1][i]=1;
              dfs(n-1,i,board,ans,vis);
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j]=ans[i][j];
            }
        }
        
    }
};