class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp,mp1;
        vector<int>v;
        for( int i=0;i<p.size();i++)mp[p[i]]++;

if (s.size() < p.size()) return {};

for( int i=0;i<p.size();i++)mp1[s[i]]++;
if(mp==mp1)v.push_back(0);

for(int i=p.size();i<s.size();i++){
    mp1[s[i]]++;
    mp1[s[i-p.size()]]--;
    if(mp1[s[i-p.size()]]==0)mp1.erase(s[i-p.size()]);
    cout<<mp.size()<<endl;
    if(mp==mp1)v.push_back(i-p.size()+1);
}
return v;

//    vector<int> result;
//         if (s.size() < p.size()) return result;
        
//         unordered_map<char, int> p_count, s_count;
//         for (char c : p) p_count[c]++;
        
//         for (int i = 0; i < p.size(); ++i) s_count[s[i]]++;
        
//         if (s_count == p_count) result.push_back(0);
        
//         for (int i = p.size(); i < s.size(); ++i) {
//             s_count[s[i]]++;
//             s_count[s[i - p.size()]]--;
//             if (s_count[s[i - p.size()]] == 0) s_count.erase(s[i - p.size()]);
            
//             if (s_count == p_count) result.push_back(i - p.size() + 1);
//         }
        
//         return result;
        
    }
};