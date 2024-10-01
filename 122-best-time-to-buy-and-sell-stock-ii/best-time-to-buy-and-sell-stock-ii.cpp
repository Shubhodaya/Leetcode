class Solution {
public:

int f(int i, int buy, vector<int>& a,vector<vector<int>>& dp){
    
// if(i==a.size())return 0;
if(i==a.size()-1){
    if (buy)return 0;
    else return a[i];
}

 if( dp[i][buy] != -1)return dp[i][buy];

    if(buy){
        return dp[i][buy]=max((-a[i]+f(i+1,0,a,dp)),(f(i+1,1,a,dp)));
    }else{
        return dp[i][buy]=max((a[i]+f(i+1,1,a,dp)),(f(i+1,0,a,dp)));
    }

}
    int maxProfit(vector<int>& prices) {
     
     int n= prices.size();
     vector<vector<int>> dp( n+1,vector<int>(2,-1));
     return f(0,1,prices,dp);
//   vector<vector<int>> dp( n+1,vector<int>(2,0));

//   vector<int> ahead(2,0),cur(2,0);

//   for(int i=n-1;i>=0;i--){
//       for(int buy=1;buy>=0;buy--){
//          if(buy){
//          cur[buy]=max((-prices[i]+ahead[0]),(ahead[1]));
//     }else{
//         cur[buy]=max((prices[i]+ahead[1]),(ahead[0]));
//     }
//     ahead=cur;
//       }
//   }

//   return  cur[1];

        
    }
};