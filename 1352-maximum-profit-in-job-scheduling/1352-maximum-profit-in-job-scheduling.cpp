class Solution {
public:
    int solve(int s,int &n,int end,vector<int> &dp,vector<vector<int>> &v){
        if(s>=n){
            return 0;
        }
        if(v[s][0]<end){
            return solve(s+1,n,end,dp,v);
        }
        if(dp[s] != -1)return dp[s];
        return dp[s] = max(solve(s+1,n,end,dp,v), v[s][2]+solve(s+1,n,v[s][1],dp,v));
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> v;
        int i,n = endTime.size();
        for(i = 0; i < n; i++){
            v.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(v.begin(),v.end());
        vector<int> dp(n,-1);
        return solve(0,n,0,dp,v);
    }
};