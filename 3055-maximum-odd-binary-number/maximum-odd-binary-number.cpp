class Solution {
public:
    string maximumOddBinaryNumber(string s1) {
        
        int n=s1.length();
int o=0;
        for(auto it:s1)if(it=='1')o++;
string s="";
if(o>0)for(int i=0;i<o-1;i++)s+='1';
for(int i=0;i<n-o;i++)s+='0';
if(o>0)s+='1';
return s;

    }
};