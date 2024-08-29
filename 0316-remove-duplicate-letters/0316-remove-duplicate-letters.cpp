class Solution {
public:
    string removeDuplicateLetters(string s) {

        stack<char>st;
        vector<int>li(26,-1);
int n= s.size();
        for(int i=0;i<n;i++){
            li[s[i]-'a']=i;
        }

        vector<bool>seen(26,false);

        for( int i=0;i<n;i++){
          char ch=s[i];
          if(seen[ch-'a'])continue;

          while(st.size() && (ch-'a')<(st.top()-'a') && li[st.top()-'a']>i){
            seen[st.top()-'a']=false;
            st.pop();
          }

          st.push(ch);
          seen[ch-'a']=true;
        }
string ans="";
        while(st.size()){
ans+=st.top();
st.pop();
        }
 reverse(ans.begin(),ans.end());
 return ans;       
    }
};