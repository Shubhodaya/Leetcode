class Solution {
    private :
    bool f(int i,int j, int ind,vector<vector<char>>& board,vector<vector<int>>&vis, string word){
        int n= word.size();
        if(ind==n)return true;
        int r=board.size();
        int c=board[0].size();
       if(i>=r || j>=c || i<0 || j<0 )return false;
    //    if(vis[i][j]==1)return false;
       if(board[i][j]!=word[ind])return false;
    //    vis[i][j]=1;
       char temp = board[i][j];
        board[i][j] = '*';

       if(f(i+1,j,ind+1,board,vis,word))return true;
       if(f(i,j+1,ind+1,board,vis,word))return true;
       if(f(i,j-1,ind+1,board,vis,word))return true;
       if(f(i-1,j,ind+1,board,vis,word))return true;
      
    //    ||f(i-1,j,ind+1,board,vis,word)||f(i,j+1,ind+1,board,vis,word)||f(i,j-1,ind+1,board,vis,word);

// vis[i][j]=0;
 board[i][j] = temp;
return false;

    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m= board[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));

        bool t=false;

        for( int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t = t||f(i,j,0,board,vis,word);
            }
        }

        return t;
        
    }
};