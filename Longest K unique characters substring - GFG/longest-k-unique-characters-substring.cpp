//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    
    int count=0,ans=-1;
         int start=0,end=0;
         unordered_map<int,int>mp;
         while(end<s.size())
         {
             if(mp.find(s[end])==mp.end())
             {
                 count++;
                 mp[s[end]]++;
             }
             else{
                 mp[s[end]]++;
             }
                 while(count>k)
                 {
                     mp[s[start]]--;
                     if(mp[s[start]]==0)
                     {
                         mp.erase(s[start]);
                         count--;
                     }
                     start++;
                 }
             if(count==k)
             {
                 ans=max(ans,end-start+1);
             }
             end++;
         }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends