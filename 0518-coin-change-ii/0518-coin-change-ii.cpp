class Solution {
public:
    int f(int i, int amt, vector<int>& coins, vector<vector<int>>& dp){
        if(i>=coins.size()) return 0;
        if(amt==0) return 1;
        if(dp[i][amt]!=-1) return dp[i][amt];
        int np = f(i+1,amt,coins,dp);
        int p = 0;
        if(amt>=coins[i]){
             p = f(i,amt-coins[i],coins,dp);
        }
        return dp[i][amt] = p+np;
    }
    int change(int amount, vector<int>& coins) {
        // sort(coins.begin(),coins.end());
        int n = coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return f(0,amount,coins,dp);
    }
};