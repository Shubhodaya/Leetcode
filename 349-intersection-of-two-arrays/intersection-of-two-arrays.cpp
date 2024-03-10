class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> unqEle(nums1.begin(), nums1.end()), removedEle;
        vector<int> intersection;
        for (int num : nums2) {
            if (unqEle.find(num) != unqEle.end() && removedEle.find(num) == removedEle.end()) {
                intersection.push_back(num);
                removedEle.insert(num);
            }
        }
        return intersection; 
    }
};