class Solution {
    private:
    int f(int i,vector<int>& nums,int sum){

        if(i==nums.size())return sum;

        int wele=f(i+1,nums,sum^nums[i]);
        int woele=f(i+1,nums,sum);

        return wele+woele;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        return f(0,nums,0);
    }
};