class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
int ans=0;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        int maxi=0;
int f=0;
        for(auto it: mp){
            if(it.second%2==0)ans +=it.second;
            else {f=1;ans+=it.second -1;}
        }
        return ans+1*(f==1);
    }
};