class Solution {
    private: 

    int func(int i, int j,vector<vector<int>>& grid,vector<vector<int>>&dp){
    
    // if(i>grid.size()-1 || j>grid[0].size()-1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];

    int r=INT_MIN;
    int d=INT_MIN;

    if(i+1<=grid.size()-1)r=grid[i+1][j]-grid[i][j] + func(i+1,j,grid,dp);
    if(j+1<=grid[0].size()-1)d=grid[i][j+1]-grid[i][j] + func(i,j+1,grid,dp);

    return dp[i][j]= max(0,max(r,d));


    }
public:
    int maxScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        int maxi=INT_MIN, maxi1=INT_MIN;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxi=max(maxi,func(i,j,grid,dp));
                  
                if(i+1<n)maxi1=max(maxi1,grid[i+1][j]-grid[i][j]);
                if(j+1<m)maxi1=max(maxi1,grid[i][j+1]-grid[i][j]);
            }

        }
        // cout<<"maxi"<<maxi;
        // cout<<"maxi1"<<maxi1;
        if(maxi==0)return maxi1;
        return maxi;
    }
};