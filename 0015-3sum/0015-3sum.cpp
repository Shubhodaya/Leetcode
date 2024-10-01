class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
sort(nums.begin(),nums.end());
set<vector<int>>st;
int n= nums.size();

for( int i=0;i<n;i++){

int num=-nums[i];

int l=0,r=n-1;

while(i>l &&  r>i){

int sum= nums[l]+nums[r];

if(sum==num){st.insert({nums[l],nums[i],nums[r]}); l++;r--;}
else if(sum<num)l++;
else r--;


}

}

vector<vector<int>>v(st.begin(),st.end());
return v;
    }
    
};