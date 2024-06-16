class Solution {

public:
    
    long long f(int i, vector<pair<int,int>>&v,vector<long long>&dp){
        
   if(i==v.size())return 0;
   if(dp[i]!=-1)return dp[i];
   long long nt=f(i+1,v,dp);
   long long t=0;

   int ni=i+1;

   while(ni<v.size() && (v[ni].first-v[i].first<=2))ni++;
 t= f(ni,v,dp) + ((1ll)*v[i].second*v[i].first);

return dp[i]=max(t,nt);
        
    }
    long long maximumTotalDamage(vector<int>& power) {
        map<long long ,long long>mp;
        
        int n=power.size();
        
        for(int i=0;i<n;i++){
            mp[power[i]]++;
        }
        vector<pair<int,int>>v;
        // vector<int>vis(1e9+1,0);
        
        
        for(auto it: mp)v.push_back({it.first,it.second});
        
        
        sort(v.begin(),v.end());

        
        for(auto it: v)cout<<it.first<<" "<<it.second<<endl;
        // vector<vector<long long>>dp(n+10,vector<long long>(3,-1));
        vector<long long>dp(n+1,-1);
        
        return f(0,v,dp);
    }
};