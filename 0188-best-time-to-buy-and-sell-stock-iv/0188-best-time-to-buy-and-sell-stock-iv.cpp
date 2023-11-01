class Solution {
public:

int f(int i,int tr,int k,vector<int> &a,vector<vector<int>> &dp  ){

  if(tr==2*k) return 0;
    if(i==a.size())return 0;
  

    if(dp[i][tr]!=-1)return dp[i][tr];

    if(tr%2==0){
        int b=-a[i]+f(i+1,tr+1,k,a,dp);
        int nb=f(i+1,tr,k,a,dp);
        return dp[i][tr]= max(b,nb);

    }else{
int s= a[i]+f(i+1,tr+1,k,a,dp);

int ns= f(i+1,tr,k,a,dp);

return dp[i][tr]= max(s,ns);
    }




}
    int maxProfit(int k, vector<int>& prices) {
      

      vector<vector<int>> dp (prices.size()+1,vector<int>(2*k+1,-1));
        return f( 0,0,k,prices,dp);
        
    }
};