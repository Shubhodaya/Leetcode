class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        
        if (digits.empty()) {
            return res;
        }
        
        unordered_map<char, string> digitToLetters;
            digitToLetters['2'] ="abc";
            digitToLetters['3'] ="def";
            digitToLetters['4'] ="ghi";
            digitToLetters['5'] ="jkl";
            digitToLetters['6'] ="mno";
            digitToLetters['7'] ="pqrs";
            digitToLetters['8'] ="tuv";
            digitToLetters['9'] ="wxyz";
        backtrack(digits, 0, "", res, digitToLetters);
        
        return res;        
    }

    void backtrack(const string& digits, int idx, string comb, vector<string>& res, unordered_map<char, string>& digitToLetters) {
        if (idx == digits.length()) {
            res.push_back(comb);
            return;
        }
        
   if (digitToLetters.find(digits[idx]) != digitToLetters.end()) {
    string letters = digitToLetters[digits[idx]];
    for (char letter : letters) {
        backtrack(digits, idx + 1, comb + letter, res, digitToLetters);
    }
}
    }    
};