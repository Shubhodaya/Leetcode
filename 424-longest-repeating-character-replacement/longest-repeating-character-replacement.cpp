class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();
        if (n == 1)
            return 1;

      int start=0,end=0;
       vector<int> charCount(26,0);
       int maxCount=0;
       int maxLength=0;
       for(end=0;end<s.size();++end) {
         charCount[s[end]-'A']++;
         maxCount=max(maxCount,charCount[s[end]-'A']);
         while(end-start+1-maxCount>k){
            charCount[s[start]-'A']--;
                start++;
         }
         maxLength=max(maxLength,end-start+1);
       }
       return maxLength;
    }
};