class Solution {

    private:
     long long f(int i,int pos, int steps, int arrlen ,vector<vector<long long>>&dp ){
        int m= 1e9+7;

        if(pos<0 || pos>=arrlen)return 0;

        if(i==steps && pos==0)return 1;
        if(i==steps && pos!=0)return 0;

        if(dp[i][pos]!=-1)return (dp[i][pos]%m);

        long long l=f(i+1,pos-1,steps,arrlen,dp)%m;
        long long r=f(i+1,pos+1,steps,arrlen,dp)%m;
        long long s=f(i+1,pos,steps,arrlen,dp)%m;

        return dp[i][pos]= ((l%m)+(r%m)+(s%m))%m;

     }
public:
    int numWays(int steps, int arrLen) {
        
 vector<vector<long long>>dp(steps+1,vector<long long>(steps+1,-1)); 
        return f(0,0,steps,arrLen,dp);
    }
};