class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>v;
        int n= nums.size();

        for( int i=0;i<n;i++){
            int num=-nums[i];

            int l=0,r=n-1;
            while(l<i && i<r){
if(l==i)l++;
if(r==i)r--;
                int x= nums[l]+nums[r];
if(x==num){v.insert({nums[l],nums[i],nums[r]});
l++;
r--;
}
                if(x>num)r--;
                if(x<num) l++;


            }
        }
        vector<vector<int>>v1(v.begin(),v.end());
     return v1;   
    }
};