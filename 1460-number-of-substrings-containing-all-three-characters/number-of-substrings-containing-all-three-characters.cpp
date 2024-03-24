class Solution {
public:
    int numberOfSubstrings(string s) {
int n=s.size(),ans=0;        
        unordered_map<char,int>mp;int i=0;
int j=0;
    while(j<n){

 if(!(mp['a']>0 && mp['b']>0 && mp['c']>0))mp[s[j]]++;

if(mp['a']>0 && mp['b']>0 && mp['c']>0){

ans += n-j;
mp[s[i]]--;
i++;
}
 if(!(mp['a']>0 && mp['b']>0 && mp['c']>0))j++;

    }
return ans;
    }
};