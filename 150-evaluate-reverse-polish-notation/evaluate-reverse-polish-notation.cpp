class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
st.push(stoi(tokens[0]));

for( int i=1;i<tokens.size();i++){
    if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")st.push(stoi(tokens[i]));
    else{
        if(tokens[i]=="+"){
            int s1=st.top();
            st.pop();
            int s2=st.top();
            st.pop();
            st.push(s1+s2);
        }
                if(tokens[i]=="-"){
            int s1=st.top();
            st.pop();
            int s2=st.top();
            st.pop();
            st.push(s2-s1);
        }
                if(tokens[i]=="*"){
            int s1=st.top();
            st.pop();
            int s2=st.top();
            st.pop();
            st.push(s1*s2);
        }
                if(tokens[i]=="/"){
            int s1=st.top();
            st.pop();
            int s2=st.top();
            st.pop();
            st.push(s2/s1);
        }

    }
}

return st.top();
        
    }
};