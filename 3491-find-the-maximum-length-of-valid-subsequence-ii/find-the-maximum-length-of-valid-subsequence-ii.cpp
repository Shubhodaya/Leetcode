class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        
        int n= nums.size();
        for( int i=0; i<n; i++)nums[i]=nums[i]%k;
        
        vector<vector<int>>dp(k,vector<int>(k,0));

int ans=0;
        for( int i=0;i<n;i++){
            for( int j=0;j<k;j++){
                dp[nums[i]][j]=max(dp[nums[i]][j],dp[j][nums[i]]+1);
                ans= max(ans,dp[nums[i]][j]);
            }
        }
        
        return ans;
    }
};