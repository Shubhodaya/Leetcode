class Solution {

    bool f(int i, int j, string&s, string& p){

int ns=s.size(), np=p.size();

if(i>=ns && j>=np)return true;
        
if(j>=p.size())return false;

bool match=(i<ns && ((s[i]==p[j])||(p[j]=='.')));

if(j+1<np && p[j+1]=='*')
return (f(i,j+2,s,p)||(match && f(i+1,j,s,p)));

if(match)return f(i+1,j+1,s,p);

return false;

        


    }
public:
    bool isMatch(string s, string p) {
        return f(0,0,s,p);
    }
};