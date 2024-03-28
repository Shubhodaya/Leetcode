class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int j=0,i=0;
        int n=nums.size();
        map<int,int>mp;
        int ans=0;

        while(j<n){
          mp[nums[j]]++;

              while(mp[nums[j]]>k){
            mp[nums[i]]--;
                i++;
              }
                 
              ans=max(ans,j-i+1);

             j++;
        }
        return ans;

        
    }
};