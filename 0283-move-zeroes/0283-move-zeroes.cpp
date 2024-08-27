class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int l=0, r=0;
         while(r<n && nums[r]==0)r++;
         while(l<n && nums[l]!=0){l++;}

        while(r<n && l<n){
            while(l<n && nums[l]!=0){l++;}

            while(r<n && nums[r]==0)r++;

            if(l>=n || r>=n )return;

            if(nums[l]==0 && nums[r]!=0 && l<r){swap(nums[l],nums[r]);l++;r++;}
            if(l>=r)r=l;
            // cout<<"1";
        }
        return;
    }
};