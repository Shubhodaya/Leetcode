class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       vector<int>adj[rooms.size()];
       int n=rooms.size();

       for(int i=0;i<n;i++){
        int curr=i;
        for(int j=0;j<rooms[i].size();j++){
            int nr=rooms[i][j];
            adj[curr].push_back(nr); 
        }
       }
       vector<int>vis(n,0);

      function<void(int)> f = [&](int curr) {
    vis[curr] = 1; // Mark the current node as visited

    for (auto it : adj[curr]) {
        if (vis[it] == 0) // If the adjacent node hasn't been visited
            f(it); // Recursively visit it
    }
      };
       f(0);

       for(auto it:vis)if(it==0)return false;
       return true;

        
    }
};