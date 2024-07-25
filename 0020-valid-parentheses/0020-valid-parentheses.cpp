class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
st.push(s[0]);
        for( int i=1;i<s.size();i++){

            if(st.size()==0 && (s[i]==')' || s[i]=='}'  || s[i]==']'))return 0;
            char t;
            if(st.size()) t=st.top();
            if( s[i]=='(' || s[i]=='{'  || s[i]=='[')st.push(s[i]);
            else{
                if( s[i]==')' && t!='(')return 0;
                if( s[i]=='}' && t!='{')return 0;
                if( s[i]==']' && t!='[')return 0;
                st.pop();
            }
        }
        if(st.size())return 0;
        return 1;
        
    }
};