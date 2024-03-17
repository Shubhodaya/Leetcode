class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        map<int,int>mp;
int sum=0;
        for(int i=0;i<nums.size();i++){
sum += nums[i]==0 ?-1:1;
mp[sum]=i;
        }
sum=0;int ans=0;
if(mp[0])ans = mp[0]+1;

        for(int i=0;i<nums.size();i++){
  sum += nums[i]==0 ?-1:1;    
if(mp[sum])ans = max(ans,mp[sum]-i);
        }

        return ans;
    }
};