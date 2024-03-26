class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mr;
        map<vector<int>,int>mc;
        int n=grid.size();


        for(int i=0;i<n;i++){
            vector<int>temp,ab;
            for(int j=0;j<n;j++){
temp.push_back(grid[i][j]);
ab.push_back(grid[j][i]);

            }
            mr[temp]++;
            mc[ab]++;
        }
int ans=0;
        for(auto it:mr){
            vector<int>a=it.first;
            if(mc.find(a)!=mc.end()){
                ans += it.second * mc[a];
            }
        }

        return ans;
    }
};