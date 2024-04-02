class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mps,mpt;
int n=s.size();
int m=t.size();
if(n!=m)return 0;

        for(int i=0;i<n;i++){
        
         if(mpt.find(t[i])!=mpt.end() && mpt[t[i]]!=s[i])return 0;

        if(mps.find(s[i])!=mps.end()&&  mps[s[i]]!=t[i])return 0;

    mps[s[i]]=t[i];
    mpt[t[i]]=s[i]; 
        }
return 1;
      

      


        
    }
};