class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();

        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }

        map<int,int>mp;
mp[0]++;
        for(int i=1;i<n;i++){
if(mp[nums[i]%k]>0)return true;
mp[nums[i-1]%k]++;
        }
        
        return false;
    }
};