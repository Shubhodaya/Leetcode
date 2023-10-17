//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int frst=0;
    int scnd=0;
    
    
    for(int i=0;i<S.size();i++){
        if(i%2==0 && S[i]=='0'){
            frst++;
        }
        
        if(i%2==1 && S[i]=='1'){
            frst++;
        }
        
        if(i%2==1 && S[i]=='0'){
            scnd++;
        }
        if(i%2==0 && S[i]=='1'){
            scnd++;
        }
    }
    
    if(frst>scnd)return S.size()-frst;
    else
    return S.size()-scnd;
}