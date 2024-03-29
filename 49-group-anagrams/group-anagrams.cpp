class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<vector<char>,vector<int>>mp;
        
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            vector<char>t;
            for(int j=0;j<temp.size();j++)t.push_back(temp[j]);
            sort(t.begin(),t.end());
            mp[t].push_back(i);
        }
        vector<vector<string>>v;

        for(auto it: mp){
            vector<string>s;
            vector<int>pos=it.second;
            for(int x:pos)s.push_back(strs[x]);

            v.push_back(s);
        }
        return v;
        
    }
};