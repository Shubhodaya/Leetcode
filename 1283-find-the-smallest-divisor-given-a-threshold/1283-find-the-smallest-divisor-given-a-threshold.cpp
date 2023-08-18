class Solution {
public:

bool func(vector<int>& nums,int x, int threshold){
    int sum =0;

    for(auto i : nums){
    sum += ceil((double)i/(double)x);
    if(sum>threshold){
        return false;
        break;
    }

    }

    return true;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
         
         int maxi = nums[0];
         for(auto i: nums){
             maxi = max(maxi,i);
         }

         if(nums.size()==1)return ceil((double)nums[0]/(double)threshold);
         int h= maxi;
         int l =1;
         int ans;
         while(l<=h){
            int mid =l+(h-l)/2;

            if(func(nums,mid,threshold)){
                ans=mid;
                h=mid-1;

            }else{
                 l=mid+1;
            }

         }

         return ans;

        
    }
};