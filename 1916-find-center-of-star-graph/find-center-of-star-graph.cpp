class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;

        for(auto it: edges){
            mp[it[0]]++;
            mp[it[1]]++;

            if(mp[it[0]]>1)return it[0];
            if(mp[it[1]]>1)return it[1];
        }
        return  -1;
    }
};