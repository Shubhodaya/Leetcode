class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
int ans=-1e9;
        for(auto it: nums){
        s += it;
        ans = max(ans,s);

        if(s<0)s=0;
        
        }
        return ans;
        
    }
};