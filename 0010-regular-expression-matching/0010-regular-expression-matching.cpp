class Solution {

    bool f(int i, int j, string&s, string& p,vector<vector<int>>&dp){

int ns=s.size(), np=p.size();

if(i>=ns && j>=np)return 1;
        
if(j>=p.size())return 0;

if(dp[i][j]!=-1)return dp[i][j];

bool match=(i<ns && ((s[i]==p[j])||(p[j]=='.')));

if(j+1<np && p[j+1]=='*')
return dp[i][j]= (f(i,j+2,s,p,dp)||(match && f(i+1,j,s,p,dp)));

if(match)return dp[i][j]=f(i+1,j+1,s,p,dp);

return dp[i][j]=0;

        


    }
public:
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(s.size()+1,vector<int>(p.size()+1,-1));
        return f(0,0,s,p,dp);
    }
};