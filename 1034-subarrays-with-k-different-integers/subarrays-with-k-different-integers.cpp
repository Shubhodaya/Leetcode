class Solution {
public:
int f(vector<int>& nums, int k){
 map<int, int> mp;

        int ans = 0, l = 0, r = 0;

        while (r < nums.size()) {

            mp[nums[r]]++;

            while (l<=r && mp.size() > k) {
                // ans++;
                mp[nums[l]]--;
                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
            }

            // if (mp.size() == k)
                ans += r - l + 1;

                r++;
        }

    
    return ans;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {

       return f(nums,k)-f(nums,k-1);

    }
};