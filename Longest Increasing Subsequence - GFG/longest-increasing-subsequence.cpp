//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       
    //   vector<int>dp(n+1,1);
    //   int maxi=1;
       
    //   for(int i=0;i<n;i++){
           
    //       for(int prev=0;prev<i;prev++){
               
    //           if(a[i]>a[prev] && dp[i]<dp[prev]+1){
    //               dp[i]=dp[prev]+1;
    //               maxi=max(maxi,dp[i]);
    //           }
               
    //   }
       
    // }
    
    // return maxi;
    vector<int>temp;
    temp.push_back(a[0]);
    int c=1;
    
    for(int i=1;i<n;i++){
        
        if(a[i]>temp.back()){
        temp.push_back(a[i]);
        c++;
    }
    
    else{
        int lb= lower_bound(temp.begin(),temp.end(),a[i])-temp.begin();
        temp[lb]=a[i];
    }
    }
    
    return c;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends