class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n= nums.size();
        int l=0,h=n-1;
int mid;
        while(l<=h){

            mid = (l+h)/2;
            if(nums[mid]==target)return mid;

            if(nums[l]<=nums[mid] ){ //sorted left
              if(target<nums[mid] && target>=nums[l]){
                h=mid-1;
              }else{
                l=mid+1;
              }

            }

            if(nums[mid]<nums[h] ){ //sorted right
              if(target>nums[mid] && target<=nums[h]){
                l=mid+1;
              }else h=mid-1;

            }




        }

        return -1;
        
    }
};