class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());

        set<vector<int>>st;
        st.insert(points[0]);


        int n=points.size()-1;
 int i=1;
        while(n--){
            
            int s=(*(--st.end()))[0];
             int l=(*(--st.end()))[1];

             if(points[i][0]<=l){
                    st.erase(*(--st.end()));
                    st.insert({max(s,points[i][0]), min(l,points[i][1])});
             }else{

st.insert(points[i]);
             }
             i++;

        }

        return st.size();
        
    }
};