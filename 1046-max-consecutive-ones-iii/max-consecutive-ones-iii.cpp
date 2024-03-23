class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,ans=0,c=0;


        for(int r=0;r<nums.size();r++){
       
       if(nums[r]==0)c++;

       while(c>k){
if(nums[l]==0){c--;l++;}
else{
    l++;
}
       }

       ans=max(ans,r-l+1);


        }return ans;
        
    }
};