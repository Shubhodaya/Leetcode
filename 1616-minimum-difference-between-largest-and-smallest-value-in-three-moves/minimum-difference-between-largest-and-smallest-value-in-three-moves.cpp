class Solution {
public:
    int minDifference(vector<int>& nums) {


int n=nums.size();
if(nums.size()<=4)return 0;

        sort(nums.begin(),nums.end());

        int g= n-4;

        int mini=2e9;

        for( int i=0;i<n;i++){

           if(i+g<n) mini= min(mini,nums[i+g]-nums[i]);
        }

        return mini;

        
        
    }
};