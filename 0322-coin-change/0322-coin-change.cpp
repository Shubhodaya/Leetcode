class Solution {
    private: int f(int i,vector<int>& coins, int amount, vector<vector<int>>&dp){

        if(amount==0)return 0;
        if(i==coins.size())return 1e9;
        if(dp[i][amount]!=-1)return dp[i][amount];

int t=1e9;
  if(amount>=coins[i])t=f(i,coins,amount-coins[i],dp)+1;

 int nt=f(i+1,coins,amount,dp);

 return dp[i][amount]=min(t,nt);

    }
public:
    int coinChange(vector<int>& coins, int amount) {

vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        if( f(0,coins,amount,dp)>=1e9)return -1;
        else return f(0,coins,amount,dp);
    }
};