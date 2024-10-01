class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // int c=0;
        int n= nums.size();
        map<int,int>mp;
        for( int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end())return{mp[target-nums[i]],i};
            mp[nums[i]]=i;
        }
return {0};
        
    }
};