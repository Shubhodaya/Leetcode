class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len =1e9;
        for( auto it: strs){
            len = min(len,(int)it.size());
        }
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string ans="";
        string frst=strs[0];
        string lst=strs[n-1];
        for(int i=0;i<len;i++){
               if(frst[i]==lst[i])
               ans += frst[i];
               else
               break;
        }
        return ans;
    }
};