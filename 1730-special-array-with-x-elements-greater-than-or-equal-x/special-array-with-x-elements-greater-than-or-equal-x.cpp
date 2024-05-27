class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        // multiset<int>st;
        // for(int i=0;i<n;i++)st.insert(nums[i]);

        for(int i=1;i<=n;i++){
            int c= n - (lower_bound(nums.begin(), nums.end(), i) - nums.begin());
            if(c==i)return i;
        }
return -1;



        
    }
};