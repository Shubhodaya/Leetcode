class Solution {
public:
    int numberOfSubstrings(string s) {
          int n = s.size();
    int ans = 0;        
    unordered_map<char, int> mp;
    int i = 0, j = 0;

    while (j < n) {
        mp[s[j]]++;

        // If the current window contains all three characters 'a', 'b', and 'c'
        while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
            // Add the number of substrings ending at index 'j'
            ans += n - j;

            // Move the left pointer 'i' to the right until the condition is met
            mp[s[i]]--;
            i++;
        }
        // Move the right pointer 'j' to the right
        j++;
    }
    return ans;
// int n=s.size(),ans=0;        
//         unordered_map<char,int>mp;int i=0;
// int j=0;
//     while(j<n){

// mp[s[j]]++;

// if(mp['a']>0 && mp['b']>0 && mp['c']>0){

// ans += n-j;
// mp[s[i]]--;
// i++;
// }
//  if(!(mp['a']>0 && mp['b']>0 && mp['c']>0))j++;

//     }
// return ans;
    }
};