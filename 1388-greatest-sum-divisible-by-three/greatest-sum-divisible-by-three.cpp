class Solution {

    private :
     int f(int i,vector<int>& nums,int x,vector<vector<int>>&dp){
    
        if(i==nums.size()){
            if(x==0)return 0;
            else return -1e9;
        }

        if(dp[i][x]!=-1)return dp[i][x];

        return dp[i][x] = max(f(i+1,nums,x,dp), f( i+1, nums,(x+nums[i])%3,dp) + nums[i]);



     }
public:
    int maxSumDivThree(vector<int>& nums) {
int n= nums.size();
vector<vector<int>>dp(n+1, vector<int>(3,-1));
    return    f(0,nums,0,dp);

    
        
    }
};