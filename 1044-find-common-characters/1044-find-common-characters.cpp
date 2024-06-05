class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        
        map<char,int>mp;
        for(int i=0;i<words[0].size();i++)mp[words[0][i]]++;


        for(int i=1;i<words.size();i++){
            map<char,int>mp1;

            for(int j=0;j<words[i].size();j++)mp1[words[i][j]]++;

            for(auto it:mp){
                if(mp[it.first]!=mp1[it.first])mp[it.first]=min(mp[it.first],mp1[it.first]);
            }
        }

        vector<string>ans;

        for(auto it:mp){
            for(int i=0;i<it.second;i++){string str=""; str+=it.first;ans.push_back(str);}
        }
        return ans;
    }
};