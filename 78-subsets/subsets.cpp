class Solution {
    private:
    void f(int i,vector<int>& nums, set<vector<int>>& st , vector<int>temp){
        int n= nums.size();
        if(i==n){
            st.insert(temp);return;
        }

        temp.push_back(nums[i]);
        f(i+1,nums,st,temp);
        temp.pop_back();

        f(i+1,nums,st,temp);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        set<vector<int>>st;
        f(0,nums,st,{});
        vector<vector<int>>v(st.begin(),st.end());

        return v;
        
    }
};