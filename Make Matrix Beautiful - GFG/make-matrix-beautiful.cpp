//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int maxSum=0,sum=0;
        for(int i=0; i<n; i++){
            int sum1=0,sum2=0;
            for(int j=0; j<n; j++){
                sum1+=matrix[i][j];
                sum2+=matrix[j][i];
            }
            maxSum=max(maxSum,sum1);
            maxSum=max(maxSum,sum2);
            sum+=sum1;
        }
        return (maxSum*n-sum);
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends