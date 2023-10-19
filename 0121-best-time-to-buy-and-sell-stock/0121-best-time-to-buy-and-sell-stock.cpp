class Solution {
public:
    int maxProfit(vector<int>& prices) {

  int n=prices.size();
  int mp=0;
  int mini=1e9;
  for(int i=0;i<n-1;i++){


      mini=min(mini,prices[i]);
      int p=prices[i+1]-mini;
      mp=max(mp,p);
  }
  return mp;
        
    }
};