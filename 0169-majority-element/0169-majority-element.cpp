class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int t=0;

        for( auto it: nums){
            if(count ==0){
                t=it;
            }

            if(it==t){
                count++;
            }else count --;
        }

        return t;
        
    }
};