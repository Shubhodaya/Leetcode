class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        int c=0;

        int carry=0;
        for(int i=n-1;i>=0;i--){

            if(i==0){
                c+=carry;break;
            }

            if(s[i]=='0' && carry==0){
                c++;
            }else if((s[i]=='0' && carry==1) || (s[i]=='1' && carry==0)){
                carry=1;
                c+=2;
            }else{
                c++;
            }

        }
        return c ;
        
    }
};