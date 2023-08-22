//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
     

bool find(int i , int j , int indx , int flag , vector<vector<char>>&grid  , string &word){
       if( i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || word[indx] != grid[i][j])
       return false;
       
       if(word[indx] == grid[i][j] && indx == word.size() -1)
       return true;
     
        if(flag == 1)  return find( i + 1 , j , indx + 1 , 1 , grid , word);
        if(flag == 2)  return find( i - 1 , j , indx + 1 , 2 , grid , word);
        if(flag == 3)  return find( i + 1 , j + 1, indx + 1 , 3 , grid , word);
        if(flag == 4)  return find( i + 1 , j - 1 , indx + 1 , 4 , grid , word);
        if(flag == 5)  return find( i , j + 1, indx + 1 , 5 , grid , word);
        if(flag == 6)  return find( i  , j -1 , indx + 1 , 6 , grid , word);
        if(flag == 7)  return find( i - 1 , j -1  , indx + 1 , 7 , grid , word);
        if(flag == 8)  return find( i - 1 , j + 1, indx + 1 , 8 , grid , word);
   }
   
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	     int R = grid.size();
       int C = grid[0].size();
       vector<vector<int>>ans;
       for( int i = 0 ; i < R ; i++)
       for( int j = 0 ; j < C ; j++)
       for (int flag = 1; flag <= 8; flag++) 
                if (find(i, j, 0, flag, grid, word)) {
                    ans.push_back({i, j});
                    break;
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends