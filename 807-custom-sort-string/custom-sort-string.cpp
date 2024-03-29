class Solution {
public:
    string customSortString(string order, string s) {
        //   std::unordered_map<char, int> charCount;
        // for (char c : order) {
        //     charCount[c] = 0;
        // }

        // for (char c : s) {
        //     if (charCount.find(c) != charCount.end()) {
        //         charCount[c]++;
        //     }
        // }

        // std::string sortedS;
        // for (char c : order) {
        //     sortedS.append(charCount[c], c);
        // }

        // for (char c : s) {
        //     if (charCount.find(c) == charCount.end()) {
        //         sortedS.push_back(c);
        //     }
        // }

        // return sortedS;
        map<char, int> mp;
        string a = "";
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;

        for (int i = 0; i < order.size(); i++) {
            if (mp[order[i]]) {
                int k = mp[order[i]];
                while (k--) {
                    a.push_back(order[i]);
                    mp[order[i]]--;
                }
            }
        }

        for (auto it : mp) {
            if (it.second) {
                int k = it.second;
                while (it.second--)
                    a.push_back(it.first);
            }
        }
        return a;
    }
};