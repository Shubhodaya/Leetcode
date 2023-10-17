//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    private:
    
    int func(int ind,int i,int j,vector<vector<char> > &mat, string target){
       
       
        int r=mat.size();
        int c= mat[0].size();
        
        
        if(i<0 || j<0 || i>r-1 || j>c-1 || mat[i][j]!=target[ind])return 0;
        

        if(mat[i][j]==target[ind]){
        char ch=mat[i][j];
        
         
        if(ind==target.size()-1)return 1;
       
        ind++;
        
        
        mat[i][j]='0';
        
        int res= func(ind,i+1,j,mat,target)+func(ind,i-1,j,mat,target)+func(ind,i,j-1,mat,target)+func(ind,i,j+1,mat,target);
            
        
        
    mat[i][j]=ch;
    return res;
        }
        
    
    //   int r = mat.size();
    //     int c = mat[0].size();

    //     if (i < 0 || j < 0 || i >= r || j >= c  || mat[i][j] != target[ind]) return 0;

    //     if (ind == target.size() - 1) {
    //         return 1;
    //     }
    //     char ch=mat[i][j];
    //     mat[i][j] = '1'; // Mark cell as visited
    //     int res = func(ind + 1, i + 1, j, mat, target) +
    //               func(ind + 1, i - 1, j, mat, target) +
    //               func(ind + 1, i, j - 1, mat, target) +
    //               func(ind + 1, i, j + 1, mat, target);
    //     mat[i][j] = ch; // Backtrack and mark cell as not visited

    //     return res;
        
        
    }
    public:
    int findOccurrence(vector<vector<char> > &mat, string target){
        int r=mat.size();
        int c= mat[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            ans +=func(0,i,j,mat,target);
        }
    }
    
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin >> R >> C;
        vector<vector<char> > mat(R);
        for (int i = 0; i < R; i++) {
            mat[i].resize(C);
            for (int j = 0; j < C; j++) cin >> mat[i][j];
        }
        string target;
        cin >> target;
        Solution obj;
        cout<<obj.findOccurrence(mat,target)<<endl;
    }
}

// } Driver Code Ends