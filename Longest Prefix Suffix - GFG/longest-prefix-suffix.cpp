//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    int n=s.size();
	    if(n==1)return 0;
	    vector<int> prefix(s.size(),0);
	    
	    for(int i=0,j=1;j<s.size();){
	        
	        if(s[i]==s[j]){
	            prefix[j]=i+1;
	            i++;
	            j++;
	        }else{
	            if(i==0)j++;
	            else
	            i=prefix[i-1];
	        }
	        
	        
	    }
	    
	    return prefix[s.size()-1];
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends