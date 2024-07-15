class Solution {
private:
    int dfs(vector<vector<int>>& stones, int index, vector<int>& visited ){
         int n = stones.size();
        visited[index] = 1;
        int result = 0; 
        for(int i = 0; i < n; i++)
            if(!visited[i])
                if((stones[i][0] == stones[index][0]) || ( stones[i][1] == stones[index][1]))
                     result+=dfs(stones, i, visited) + 1;
                
            
        
        return result; 
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<int> visited(n, 0);
        int ans = 0; 
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                ans+=dfs(stones, i, visited);
            }
        }
        return ans; 
    }
};