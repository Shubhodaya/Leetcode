// class Solution {
// public:

// bool dfs(int node, int col, vector<vector<int>>& graph, vector<int>& color){
//         color[node] = col;
        
//         for(int adjnode : graph[node]){
//             // not yet colored
//             if(color[adjnode] == -1){
//                 if(dfs(adjnode, !col, graph, color) == false){
//                     return false;
//                 }
//             }
//             else if(color[adjnode] == color[node]){
//                 return false;
//             }
//         }
//         return true;
//     }
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n= graph.size();
//         vector<int>color(n,-1);
        
// vector<int> vis(n,0);
// color[0]=0;
// for(int i=0;i<n;i++){
//         if(color[i]==-1){
//          if(dfs(0,0,graph,color)==false)return false;

//         } 
//     }


//     return true;
//     }
// };

class Solution {
public: 
    bool bfs(int src, vector<vector<int>> g, vector<int> &col){
        queue<int> q;
        q.push(src);

        while(!q.empty()){
            auto node = q.front();
            q.pop();

            for(auto adj : g[node]){
                if(col[adj] == -1){
                    col[adj] = !col[node];
                    q.push(adj);
                }
                else if(col[adj] == col[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int src = 0;
        int n = graph.size();

        vector<int> col(n, -1);

        for(int i=0;i<n;i++){
            if(col[i] == -1){
                if(bfs(i, graph, col) == false){
                    return false;
                }
            }
        }
        return true;
    }
};