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
        vector<int>dp(nums.size()+1,-1);
        return f(nums.size()-1,nums,dp);
    }
};