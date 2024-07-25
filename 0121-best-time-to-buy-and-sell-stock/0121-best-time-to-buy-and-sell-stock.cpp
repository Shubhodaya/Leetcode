class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=1e9,maxi=-1;
int ans=0;
        for( int i=0;i<prices.size();i++){
             ans=max(ans,prices[i]-mini);
            mini=min(mini,prices[i]);
            
        }
        return ans;
        
    }
};