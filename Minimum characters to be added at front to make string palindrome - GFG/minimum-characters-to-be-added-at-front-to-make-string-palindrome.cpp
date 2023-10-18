//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int minChar(string str){
        //Write your code here
        
        string temp= str+"$";
        reverse(str.begin(),str.end());
        temp += str;
        
        vector<int>ps(temp.size(),0);
        
        for(int i=0,j=1;j<temp.size();){
            
            
            if(temp[i]==temp[j]){
                ps[j]=i+1;
                i++;
                j++;
            }else{
                
                if(i==0)j++;
                else{
                    i=ps[i-1];
                }
            }
        }
        
        return str.size()- ps[temp.size()-1];
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends