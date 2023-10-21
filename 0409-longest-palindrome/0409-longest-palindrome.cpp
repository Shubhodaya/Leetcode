class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;

        for(int i=0;i< s.size();i++){
            mp[s[i]]++;
        }

int ans=0,maxo=0,k=0;

        for(auto it: mp){

            ans += (it.second/2)*2;
            if(it.second%2==1)k=1;
       
        }

        if(k)ans ++;

        return ans;

        
        
    }
};