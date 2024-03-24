class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
int l=0, ans=0;
int x=0;map<int,int>mp;

mp[0]=1;
for(auto it:nums){
    x+=(it%2);
ans += mp[x-k];
mp[x]++;}

        return ans;
    }
};