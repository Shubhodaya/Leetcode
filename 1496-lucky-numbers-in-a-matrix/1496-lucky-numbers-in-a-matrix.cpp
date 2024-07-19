class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
      int n= mat.size();
      int m= mat[0].size();
      vector<int>ans;
        vector<int>row(n,0),col(m,0);

        for( int i=0;i<n;i++){

            int mini=1e9;

            for( int j=0;j<m;j++)mini=min(mini,mat[i][j]);
            row[i]=mini;
        }

          for( int j=0;j<m;j++){

            int mini=-1e9;

            for( int i=0;i<n;i++)mini=max(mini,mat[i][j]);
            col[j]=mini;
        }

for( int i=0;i<n;i++){
    for( int j=0;j<m;j++){
if(row[i]==mat[i][j] && col[j]==mat[i][j])ans.push_back(mat[i][j]);
    }
    }

    return ans;
    }
};