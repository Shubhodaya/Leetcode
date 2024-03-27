class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {

    int n = maze.size(), m = maze[0].size();
    vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
    vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    queue<pair<int, int>> q;
    q.push({entrance[0], entrance[1]});
    dist[entrance[0]][entrance[1]] = 0;
    
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (auto& dir : dirs) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && maze[nx][ny] == '.' && dist[nx][ny] == INT_MAX) {
                dist[nx][ny] = dist[x][y] + 1;
                if (nx == 0 || nx == n - 1 || ny == 0 || ny == m - 1) {
                    if (nx != entrance[0] || ny != entrance[1]) // Exclude entrance
                        return dist[nx][ny];
                }
                q.push({nx, ny});
            }
        }
    }
    
    return -1;
        
    }
};