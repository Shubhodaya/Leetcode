class Solution {
    int f(int i, int j, int m, int n, vector<vector<int>>& dp){

        if(i<0 || j<0)return 0;

        if(i==0 && j==0)return 1;
if(dp[i][j]!=-1)return dp[i][j];

        return dp[i][j]= f(i-1,j,m,n,dp)+ f(i,j-1,m,n,dp);
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
return f(m-1,n-1,m,n,dp);
        
    }
};