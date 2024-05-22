class Solution {
    int valid(int i , int j,string& s ){
        while(i<j){
            if(s[i]!=s[j])return 0;
            i++;j--;
        }return 1;
    }


    void f(int i,string &s,vector<string>&v, vector<vector<string>>&ans){
        

        if(i==s.size()){
                ans.push_back(v);
                return;
        }
        
        //partition
        for(int end=i+1;end<=s.size();end++){
        if(valid(i,end-1,s)){v.push_back(s.substr(i,end-i));
        f(end,s,v,ans);
        v.pop_back();
        }
        }
        

    }
public:
    vector<vector<string>> partition(string s) {
 vector<vector<string>>ans;
 vector<string>v;
        f(0,s,v,ans);
        return ans;
        
    }
};