//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:

	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    
	    int n=grid.size();
	    int m= grid[0].size();
	    queue<pair<pair<int,int>,int>>q;
	  
	    vector<vector<int>>ans(n,vector<int>(m,0));
	    vector<vector<int>> vis(n, vector<int>(m, 0));
	    
	    
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1){
	                q.push({{i,j},0});
	                ans[i][j]=0;
	                vis[i][j]=1;
	            }else
	            vis[i][j]=0;
	        }
	    }
	    
	    	        
	        
	       int dr[4]={-1,0,1,0};
            int dc[4]={0,-1,0,1};
            
	    
	    while(!q.empty()){
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int step=q.front().second;
	        q.pop();
	        ans[row][col]=step;

            
            for(int i=0;i<4;i++){
                
                    int nr=row+dr[i];
                    int nc=col+dc[i];
                    
                    if( nr>=0 && nc>=0 &&nr<n && nc<m && vis[nr][nc]==0){
                        q.push({{nr,nc},step+1});
                        vis[nr][nc]=1;
                    
                    
                }
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
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends