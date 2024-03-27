class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n=nums.size();

        map<int,int>mp;
        mp[1]=1;

        int l=0,r=0;
        int mul=1,ans=0;
          if(k==0 || k==1) {
            return 0;
        }

        for(;r<n;r++){
            
            mul *= nums[r];
            while(l<n && mul>=k){
                mul /= nums[l];
                l++;
            }
            cout<<mul<<endl;
            ans += r-l +1;


        } return max(0,ans);
        
    }
};