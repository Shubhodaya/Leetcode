class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;int n=nums.size(); 
        int c=0;

        for(int i=1;i<n;i++){
            if(nums[i]<0)c=i;
            if(nums[i]*nums[i-1]<=0)c=i;
        }
        
        int i=c-1,j=c;
        
        while(i>=0 && j<n){
              
              if(abs(nums[j])>abs(nums[i])){
                  ans.push_back(nums[i]*nums[i]);
                  i--;
              }else{
                ans.push_back(nums[j]*nums[j]);
                  j++;
              }
        }


        for(int x=i;x>=0;x--)ans.push_back(nums[x]*nums[x]);
        for(int x=j;x<n;x++)ans.push_back(nums[x]*nums[x]);

        return ans;
        
    }
};