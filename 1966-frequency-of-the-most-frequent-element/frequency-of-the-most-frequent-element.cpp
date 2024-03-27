class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int n=nums.size();

        long i=0,j=0;
        long ans=1;long sum=0;

        while(j<n){
                 sum += nums[j];
             while((j-i+1)*nums[j] - sum>(long)k)sum -= nums[i++];
             ans = max(ans,j-i+1);
             j++;
            
        }return ans;
        
    }
};