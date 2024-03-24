class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

map<int,int>mp;int s=0;
mp[0]=1;int ans=0;
for(auto it: nums){s+=it;    ans += mp[s-goal]; mp[s]++;}

return ans;


}
};