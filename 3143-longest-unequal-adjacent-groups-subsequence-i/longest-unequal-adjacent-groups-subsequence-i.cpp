class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        vector<string>ans;
        ans.push_back(words[0]);

        int i=0;
        int j=1;
        
        while(j<groups.size()){

 if(groups[j]!=groups[i]){
    ans.push_back(words[j]);
    i=j;
 }
        
            j++;
        }

return ans;
        
    }
};