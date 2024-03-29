class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        int n=nums.size();
        int l=0,r=0,x=0;
        long long ans=0;int maxi=0;

        for(auto it:nums)maxi=max(maxi,it);

        while(r<n){
if(nums[r]==maxi)x++;

                   while(x>=k){
                     if(nums[l]==maxi)x--;
                     l++;               

 ans += (n-r);
                   }        

           
            r++;
        }return ans;
    }
};