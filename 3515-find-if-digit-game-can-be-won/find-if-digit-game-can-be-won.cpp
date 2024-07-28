class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0;
        for( auto it: nums)s+=it;

        int s1=0,s2=0;

        for( auto it: nums){
            if(it>=0 && it<=9)s1+=it;
            if(it>=10 && it<=99)s2+=it;
        }
        
if( s1>s-s1 || s2>s-s2)return 1;
return 0;

    }
};