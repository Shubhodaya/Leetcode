class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
int n= nums.size();
        while(k--){
            int mini=0;
            for ( int i=0;i<n;i++){
if(nums[mini]>nums[i])mini=i;

            }
            nums[mini]=multiplier*nums[mini];
        }
        return nums;
    }
};