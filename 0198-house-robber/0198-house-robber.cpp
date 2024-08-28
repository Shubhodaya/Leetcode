class Solution {

    int f(int i,vector<int>& nums,vector<int>&dp){
        if(i<0)return 0;

        if(dp[i]!=-1)return dp[i];


        int t= nums[i]+f(i-2,nums,dp);
        int nt=f(i-1,nums,dp);

        return dp[i]=max(t,nt);
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+4,0);
        // return f(nums.size()-1,nums,dp);
int n= nums.size();
        for( int i=3;i<n+3;i++){
            
        int t= nums[i-3]+dp[i-2];
        int nt=dp[i-1];

        dp[i]=max(t,nt);
        }
return dp[n+2];

    }
};