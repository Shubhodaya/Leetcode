//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    
    long  long int f(string &str,int i,int j ,vector<vector<int>>&dp){
        long long int MOD = 1000000000+7;
        
        if(i==j)return 1;
        if(i>j)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        
        
        if(str[i]==str[j]){
            
            return dp[i][j]= (1+(f(str,i+1,j,dp)%MOD)+(f(str,i,j-1,dp)%MOD))%MOD;
        }else{
            return dp[i][j]= (f(str,i+1,j,dp)%MOD+f(str,i,j-1,dp)%MOD-f(str,i+1,j-1,dp)%MOD + MOD)%MOD;
        }
        
        
    }
    long long int  countPS(string str)
    {
       //Your code here
       
       vector<vector<int>>dp(str.size()+1,vector<int>(str.size()+1,-1));
       long long int MOD = 1000000000+7;
     
     return f(str,0,str.size()-1,dp)%MOD;
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends