//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& mat) {
        // Code here
         int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    int cnt=0;
                for(int l=-1;l<=1;l++){
                    for(int r=-1;r<=1;r++){
                        int row=i+l;
                        int col=j+r;
                       // if(row==i and col==j) continue;
                        if(row>=n or col>=m or row<0 or col<0) continue;
                        if(mat[row][col]==0) cnt++;
                        
                    }
                }
                if(cnt%2==0 and cnt!=0) ans++;
            }
           // else continue;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends