class Solution {
public:
    bool isHappy(int n) {

set<int>st;
st.insert(n);
        while(n!=1){
            int k=0, n1=n;
            while( n1){
                k+= (n1%10)*(n1%10);
                n1/=10;
            }
if(st.find(k)!=st.end())break;
            st.insert(k);
            n=k;
        }

        if(n==1)return true;
        return false;
        
    }
};