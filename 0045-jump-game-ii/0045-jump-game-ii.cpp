class Solution {
public:
    int jump(vector<int>& nums) {

        int farthest=0,res=0;
        int l=0,r=0;

        if(nums.size()==1)return 0;

        for( ;r<nums.size();){
            
            
            for(int i=l;i<=r;i++){
                farthest=max(farthest,nums[i]+i);
            }
            if(farthest<=r)return -1;
           l=r+1;
           r=farthest;
            
            res++;
            if(r>=nums.size()-1)return res;
            
        }

        return res;
        
    }
};