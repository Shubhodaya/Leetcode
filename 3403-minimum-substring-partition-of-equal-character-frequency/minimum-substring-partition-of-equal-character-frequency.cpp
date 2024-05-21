class Solution {
public:
    int minimumSubstringsInPartition(string s) {
        
        int n=s.size();
        vector<int>dp(n+1,0);
        for(int i=0;i<n;i++){
           dp[i]=i+1;
           map<char,int>mp;
           
           for(int j=i;j>=0;j--){
               mp[s[j]]++;
               int maxi=-1e5,mini=1e5;
             for(auto it: mp){   
               maxi= max(maxi,it.second);
               mini=min(mini,it.second);
             }
             
             if(mini==maxi){
                dp[i]= min(dp[i], (j==0?0:dp[j-1])+1);
             }
           }
        }

        return dp[n-1];
    }
};