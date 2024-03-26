class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int len = words[0].size();
        int n = s.size();
        int x = len * words.size();
        int k = 0;
        vector<int> ans;
        // multiset<string> st, st1;
        unordered_map<string, int> mp, mp1;
        // st.insert(words.begin(), words.end());
        // st1 = st;
        if (s.size() < x)
            return {};
        for (auto it : words)
            mp[it]++;
        // mp1 = mp;

        for (int l = 0; l <= (s.size() - x); l++) {
            // int r = l;
            string temp=s.substr(l,x);
            auto f = [&](string s, unordered_map<string, int>wordCount) {
               for(int j=0; j<s.size(); j+=len) {
            string w = s.substr(j, len);
            if(wordCount.find(w) != wordCount.end()) {
                if(--wordCount[w] == -1) {
                    return false;
                }
            } else {
                return false;
            }
        }
        return true;
            };
            if (f(temp, mp))
                ans.push_back(l);
        }
        if (ans.size() == 0)
            return {};

        return ans;
    }
};