class Solution {

        int lb(vector<int>& nums, int x){
        int h=nums.size()-1;
        int l=0;
        int ans=-1;
        while(l<=h){
            int mid=l +(h-l)/2;
            if(nums[mid]>=x){
             if(nums[mid]==x)ans=mid;
             h=mid-1;

            }else{
            l=mid+1;
            }
                   
        }

        return ans;

    }

     int ub(vector<int>& nums, int x){
        int h=nums.size()-1;
        int l=0;
        int ans=-1;
        while(l<=h){
            int mid=l +(h-l)/2;
            if(nums[mid]>x){
             
             h=mid-1;

            }else{
            if(nums[mid]==x)ans=mid;
            l=mid+1;
            }
                   
        }

        return ans;
        
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lb(nums,target),ub(nums,target)};
    }
};