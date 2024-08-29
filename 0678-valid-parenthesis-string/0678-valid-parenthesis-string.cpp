class Solution {
public:
    bool checkValidString(string s) {

        int leftmin=0,leftmax=0;


        for( int i=0;i<s.size();i++){

            if(s[i]=='('){
                leftmin++;
                leftmax++;
            }

            if(s[i]==')'){
                leftmin--;
                leftmax--;
            }

             if(s[i]=='*'){
                leftmin--;
                leftmax++;
             }

             if(leftmax<0)return false;

             if(leftmin<0)leftmin=0;

        }

        if(leftmin>0)return false;
        else return true;




    }
};