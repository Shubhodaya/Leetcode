//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        
        
        map<string,vector<string>>mp;
        
        
        for(auto it : string_list){
            
            string temp=it;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(it);
            
        }
        
        vector<vector<string>>ans;
        
        for(auto s: mp){
            
            int n=s.second.size();
            auto x=s.second;
            vector<string>vec;
            
            for(int i=0;i<n;i++){
                vec.push_back(x[i]);
            }
            
            ans.push_back(vec);
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends