class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        set<int> prev;
        int n = nums.size();
        int minV = INT_MAX;
        for (int i = 0; i < n; i++){
            set<int> next;
            for (int v : prev)
                next.insert(v & nums[i]);
            next.insert(nums[i]);

            for (int v : next)
                minV = min(minV, abs(k - v));

            prev = next;
        }
        return minV;
    }
};