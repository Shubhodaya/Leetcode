class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
int min1=1e9,min2=1e9,mini1=-1,mini2=-1;
if(n<3)return 0;

        for(int i=0;i<n;i++){

if(min1>nums[i]){
    min1=nums[i];
    mini1=i;
    // min2=1e9;
    // mini2=-1;
    continue;
}
if(nums[i]>min1 && i>mini1 && nums[i]<min2){
    min2=nums[i];
    mini2=i;
    continue;
}

if(nums[i]>min2  && mini2!=-1 && mini1!=-1 )return true;

        }
        return false;
        
    }
};