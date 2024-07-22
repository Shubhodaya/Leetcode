class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        map<int,string>mp;

        for( int i=0;i<names.size();i++)mp[-1*heights[i]]=names[i];
        vector<string>v;
        for( auto it: mp)v.push_back(it.second);
        return v;
    }
};