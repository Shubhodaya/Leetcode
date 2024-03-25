class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
              if(nums[ind]<0)return(ind+1);
              else nums[ind]=-nums[ind];
        }
         return -1;
    }
};


