class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {


        multiset<int>st;
        int ans=1;

int i=0;
        for(int j=0;j<nums.size();j++){

st.insert(nums[j]);

int f=*(st.begin());
int l=*(st.rbegin());

if(l-f<=limit){
    ans=max(ans,j-i+1);
    continue;
}else{
    while(*(st.rbegin())-*(st.begin())>limit){
 st.erase(st.find(nums[i]));
 i++;
    }

 f=*(st.begin());
 l=*(st.rbegin());

 if(l-f<=limit)ans=max(ans,j-i+1);


}


        }

        return ans;


    }
};