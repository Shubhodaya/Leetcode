class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        vector<int>ans;

        for(int x: nums){
              if(mp[x]==1 && mp.find(x-1)==mp.end() && mp.find(x+1)==mp.end())ans.push_back(x);
        }return ans;
        
    }
};