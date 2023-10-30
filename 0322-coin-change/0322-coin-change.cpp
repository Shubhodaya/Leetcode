class Solution {

    private :

    int func(int i, int amt, vector<int> &coins,vector<vector<int>> &dp){


        if(dp[i][amt]!=-1)return dp[i][amt];

        if(amt==0)return 0;
        if(i==0){
            if(amt%coins[0]==0)return amt/coins[0]; 
            return 1e9;    
        }
         

        int take=INT_MAX-1;
        if(amt>=coins[i]) take=func(i,amt-coins[i],coins,dp)+1;

        int nottake=func(i-1,amt,coins,dp);


        return dp[i][amt]= min(take,nottake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
    int ans=func(coins.size()-1,amount,coins,dp);
    if (ans>=1e9)return -1;
    else return ans;
        
    }
};