class Solution {

    // private :

    // int func(int i){



    // }
public:
    int lengthOfLIS(vector<int>& nums) {

vector<int> dp(nums.size()+1,1);

int n = nums.size();


for(int i=1;i<n;i++){

for(int j=0;j<i;j++){


    if(nums[i]>nums[j])
    dp[i]=max(dp[i],1+dp[j]);
}

}
int maxi=1;
for(int i=0;i<n;i++)maxi= max(maxi,dp[i]);

return maxi;
        
    }
};