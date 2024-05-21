class Solution {
    int cost( int i, int j,string& s){
        int ans=0;
        int n= s.size();

while(i<=j){
    if(s[i]!=s[j])ans++;
    i++;
    j--;
}
        return ans;
    }

    int f(int i, int j, string& s,vector<vector<int>>&dp){
           
           if(i<0){
            if(j==0)return 0;
            else 
            return 1e9;
           }

           if(j==0 && i!=-1)return 1e9;

           if(dp[i][j]!=-1)return dp[i][j];

           int ans=1e9;

           for( int x=i;x>=0;x--){
            ans = min(ans,f(x-1,j-1,s,dp)+cost(x,i,s) );
           }
return dp[i][j]=ans;
    }
public:
    int palindromePartition(string s, int k) {
        int n=s.size();

vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return f(s.size()-1,k,s,dp);

        
    }
};