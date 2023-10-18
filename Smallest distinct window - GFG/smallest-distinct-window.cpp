//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here 
        unordered_map<char,int>mp,mp1;
        
        for(auto it: str)mp[it]++;
        
        int d= mp.size();
        
        
        int cnt=0;
        int i=0,j=0,ans=INT_MAX;
        
        for(int i=0;i<str.size();i++){
            
            mp1[str[i]]++;
            
            if(mp1[str[i]]==1)cnt++;
            
            
            while(cnt==d){
                
                ans=min(ans,i-j+1);
                if(mp1[str[j]]==1)cnt--;
                mp1[str[j]]--;
                j++;
            }
            
            
        }
        
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends