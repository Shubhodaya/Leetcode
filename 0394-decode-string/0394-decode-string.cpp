class Solution {
public:
    string decodeString(string s) {
        stack<char>st;

        for( int i=0;i<s.size();i++){

            if(isalpha(s[i])|| isdigit(s[i]) || s[i]=='[')st.push(s[i]);

            if(s[i]==']'){
                string t="";
                while(st.size() && isalpha(st.top())){
                    t+=st.top();
                    st.pop();
                }
                reverse(t.begin(),t.end());
                   string t1="";
                      string p="";
                      st.pop();
                while(st.size() && isdigit(st.top())){
                 
                    p+=st.top();
                 
                    st.pop();
                    
                }
cout<<p<<endl;

                reverse(p.begin(),p.end());
                 int d=stoi(p);
                while(d--)t1+=t;
                for( int j=0;j<t1.size();j++)st.push(t1[j]);
            }

        }

        string ans="";

        while(st.size()){
            char c= st.top();
            st.pop();
            ans += c;
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};