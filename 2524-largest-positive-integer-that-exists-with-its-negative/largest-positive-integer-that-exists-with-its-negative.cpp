class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
int ans =-1;

        for (int x : nums){
            if(mp.find(-x)!=mp.end())ans=max(ans,abs(x));
            else 
            mp[x]++;
        }
        return ans;
    }
};