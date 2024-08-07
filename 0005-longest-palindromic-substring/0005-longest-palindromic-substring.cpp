class Solution {
private:
string f(int i,int j, string s){
    int n= s.size();

    while( i>=0 && j<n && s[i]==s[j]){
        i--;
        j++;
    }

    return s.substr(i+1,j-i-1);


}
public:
    string longestPalindrome(string s) {
string ans="";
if(s.size())ans+=s[0];
        for( int i=0;i<s.size()-1;i++){
            string s1=f(i,i,s);
            string s2=f(i,i+1,s);

            if(s1.size()>ans.size())ans=s1;
            if(s2.size()>ans.size())ans=s2;

        }
        return ans;
    }
};