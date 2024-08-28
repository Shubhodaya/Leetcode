class Solution {


unordered_map<string,bool>mp;


public:
    bool wordBreak(string s, vector<string>& wordDict) {

        if(s.size()==0)return 1;

        if(mp.find(s)!=mp.end())return mp[s];
        
int f=0;
        for(int i=1;i<=s.size();i++){
        string st=s.substr(0,i);
f=0;
        for( int j=0;j<wordDict.size();j++){
            if(st==wordDict[j]){
                f=1;
                break;
            }
        }

        if(f==1 && wordBreak(s.substr(i,s.size()-i),wordDict))return mp[s]= 1;
            
        }
    return mp[s]=0;
    
    }

};