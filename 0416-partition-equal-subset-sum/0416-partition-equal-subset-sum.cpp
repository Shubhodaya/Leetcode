class Solution {
    private : bool f(int i,vector<int>& nums,int sum, int s ,vector<vector<int>>&dp,vector<vector<bool>>&dp1){
        int n= nums.size();
        if( i==n)return false;

        if( dp[i][sum]!=-1)return dp1[i][sum];

        if(sum==s)return true;

bool t= false;
        if(nums[i]<=s-sum)t= f(i+1,nums,sum+nums[i],s,dp,dp1);
        bool nt = f(i+1,nums,sum,s,dp,dp1);

dp[i][sum]=1;
return dp1[i][sum]=(t||nt);
    }
public:
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(auto it: nums)s+=it;
        if(s%2)return 0;
        s/=2;

        // sort(nums.begin(),nums.end());

        // int l=0,r=n-1;
        int n= nums.size();
        vector<vector<int>>dp(n+1,vector<int>(s+1,-1));
        vector<vector<bool>>dp1(n+1,vector<bool>(s+1,false));
        return f(0,nums,0,s,dp,dp1);

        
        
    }
};