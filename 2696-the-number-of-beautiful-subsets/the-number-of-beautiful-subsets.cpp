class Solution {
    int f(int i , int k, vector<int>&st, vector<int>& nums,vector<int>&dp){
        int n= nums.size();

        if(i==n){
            if(st.size())return 1;
            else return 0;
        }
        // if(dp[i]!=-1)return dp[i];

        int t=0;
        // auto it=st.rbegin();
        int fl=0;
          for( int j=0;j<st.size();j++){
            if(abs(st[j]-nums[i])==k){fl=1;break;}

          }       
if(fl==0){st.push_back(nums[i]);
t= f( i+1,k,st,nums,dp);
st.pop_back();

}


        int nt=f(i+1,k,st,nums,dp);

        return dp[i]= t+nt;

    }
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int>st;
        vector<int>dp(nums.size()+1,-1);
        return f(0,k,st,nums,dp);
    }
};