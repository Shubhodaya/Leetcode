class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        for(int i=0;i<n;i++){
            int s=0;
            for( int j=i;j<n;j++){
                s+=nums[j];
                v.push_back(s);
            }
        }
        sort(v.begin(),v.end());
        int sum=0;

        left--;right--;
        int M=1e9+7;

        for( int i=left;i<=right;i++){
            sum = (sum%(M)+v[i]%(M))%(M);
        }

        return sum;
        
    }
};