class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l=0;
        int h= nums.size()-1;

        while(l<=h){

            int mid= (l+h)>>1;

            if(nums[mid]==target)return mid;

            if(nums[mid]<nums[l]){ //right sorted
               if(target<=nums[h] && target>nums[mid])l=mid+1;
               else
               h=mid-1;
            }
            else//left sorted
            {
                if(target>=nums[l] && target<nums[mid])h=mid-1;
                else{
                    l=mid+1;
                }
            }
        }

        return -1;
    }
};