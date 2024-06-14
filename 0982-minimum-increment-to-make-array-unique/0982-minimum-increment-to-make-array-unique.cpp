class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int nm=0,ans=0;

        for(auto it: nums){
            nm=max(nm,it);
            ans +=nm-it;
            nm++;
        }

        return ans;
        
    }
};