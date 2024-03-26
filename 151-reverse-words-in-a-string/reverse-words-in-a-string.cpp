class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        // int l=0;r=n-1;
        vector<string>v;
        string t="";
s+=" ";
        for(int i=0;i<n+1;i++){
            if(s[i]!=' ')t+=s[i];
            else{
                if(t!="")v.push_back(t);
                t="";
                }
        }

 int nv=v.size();
 for(int i=0;i<nv/2;i++){
    swap(v[i],v[nv-1-i]);
 }
 string k="";
 for(int i=0;i<nv;i++){
    k+=v[i];
    if(i!=nv-1)k+=" ";
 }
 return k;
        
    }
};