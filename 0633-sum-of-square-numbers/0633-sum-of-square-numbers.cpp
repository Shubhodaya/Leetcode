class Solution {
public:
    bool judgeSquareSum(int c) {
        set<int>st;

        for(int i=0;i<=sqrt(c);i++)st.insert(i*i);

        for(auto it: st){
            if(st.find(c-it)!=st.end())return true;
        }
        
        return false;
    }
};