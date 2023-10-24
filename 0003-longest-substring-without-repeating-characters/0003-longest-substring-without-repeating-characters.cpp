class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        // unordered_map<char, int> charMap;
        // int left = 0;
        
        // for (int right = 0; right < n; right++) {
        //     if (charMap.count(s[right]) == 0 ) {
        //         charMap[s[right]] = right;
        //         maxLength = max(maxLength, right - left + 1);
        //     } else {
        //         left = charMap[s[right]] + 1;
        //         charMap[s[right]] = right;
        //     }
        // }
        
        // return maxLength;
        vector<int>mp(256,-1);
        int l=0,len=0;
        int r=0;
      int ans=0;
        while(r<n){
            if(mp[s[r]]!=-1 && mp[s[r]]>=l)
                l=mp[s[r]]+1;
            
          mp[s[r]]=r;
            

          len=r-l+1;
          ans=max(ans,len);
            r++;
        }
        return ans;
    }
};