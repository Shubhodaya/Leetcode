class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
int n= strs.size();

string ans="";
        for( int i=0;i<strs[0].size();i++){
            if(i>=strs[n-1].size())return ans;
            if(strs[0][i]==strs[n-1][i])ans+=strs[0][i];
            else return ans;
        }
       return ans; 
    }
};