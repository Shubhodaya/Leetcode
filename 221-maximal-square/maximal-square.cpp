class Solution {

void f(int i , int j,vector<vector<char>>& mat, vector<vector<int>>& dp){

int n= mat.size();
int m = mat[0].size();

if(i>=n || j>=m || i<0 || j<0)return ;

if(dp[i][j]!=-1)return ;

f(i+1,j,mat,dp);
f(i, j+1,mat,dp);
f(i+1,j+1,mat,dp);

dp[i][j]=0;

if(mat[i][j]=='1'){
    dp[i][j]=1+max(0,min(dp[i+1][j+1],min(dp[i+1][j],dp[i][j+1])));
}

return;

}


public:
    int maximalSquare(vector<vector<char>>& mat) {
        int n= mat.size();
int m = mat[0].size();
         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

         f(0,0,mat,dp);

int maxi=0;

  for( int i=0;i<n;i++){
            for( int j=0;j<m;j++)cout<<dp[i][j]<<" ";
            cout<<endl;
         }


         for( int i=0;i<n;i++){
            for( int j=0;j<m;j++)maxi=max(maxi,dp[i][j]*dp[i][j]);
         }

         return maxi;
    
    }
};