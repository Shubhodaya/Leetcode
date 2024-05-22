class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        
        dp[1][0]=1;

        vector<vector<int>>ans;
 ans.push_back({1});

        for(int i=2;i<=n;i++){
            vector<int>temp(i);
            for(int j=0;j<i;j++){
               if(j==0)temp[j]=1;
               if(j==i-1)temp[j]=1;

               if(0<j && j<i-1){
                    temp[j]=dp[i-1][j-1]+dp[i-1][j];
               }

               dp[i][j]=temp[j];
            }
            ans.push_back(temp);
            
        }

        return ans;
    }
};