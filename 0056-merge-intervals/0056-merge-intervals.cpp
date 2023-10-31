class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        vector<vector<int>>ans;
        vector<int>ls;
        ls.push_back(1e9);
        ls.push_back(1e9);
        intervals.push_back(ls);

        for(int i=0;i<intervals.size();i++){
              vector<int>v;

              if(end<intervals[i][0]){
                v.push_back(start);
                v.push_back(end);
                ans.push_back(v);
                start=  intervals[i][0];
                end=intervals[i][1];
              }
              else{
                  start=min(start,intervals[i][0]);
                  end=max(end,intervals[i][1]);
              }
        
        
        }

        return ans;
        
    }
};