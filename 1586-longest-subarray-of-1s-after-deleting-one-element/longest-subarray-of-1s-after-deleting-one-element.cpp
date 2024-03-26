class Solution {
public:
    int longestSubarray(vector<int>& nums) {
 int i = 0, j = 0, ans = 0, cnt = 1, n = nums.size();
        while(j < n)
        {
            if(nums[j] == 0) {
                --cnt;
            }
            while(cnt < 0)
            {
                if(nums[i] == 0) {
                    ++cnt;
                }
                
                ++i;
            }
            ans = max(ans, j-i);
            ++j;
        }
        return ans;
    }
};