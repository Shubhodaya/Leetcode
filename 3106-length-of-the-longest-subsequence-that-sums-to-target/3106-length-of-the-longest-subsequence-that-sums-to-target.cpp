class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int k) {
 int n = nums.size();
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, -1e5));

        // Base case: If target is 0, the length of subsequence is 0
        for (int i = 0; i <= n; ++i) {
            dp[0][i] = 0;
        }

        // Fill the dp table iteratively
        for (int target = 1; target <= k; ++target) {
            for (int ind = n - 1; ind >= 0; --ind) {
                // Not take the current element
                dp[target][ind] = dp[target][ind + 1];

                // Take the current element if it's <= target
                if (target >= nums[ind]) {
                    dp[target][ind] = max(dp[target][ind], 1 + dp[target - nums[ind]][ind + 1]);
                }
            }
        }

        // The answer is in dp[k][0]
        int ans = dp[k][0];
        return ans > 0 ? ans : -1;
    }
};