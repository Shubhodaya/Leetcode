/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int cnt=0;
        function<void(TreeNode*,int)>f=[&](TreeNode* root,int maxi){
if(!root)return;
if(root->val>=maxi)cnt++;
            maxi=max(maxi,root->val);
            f(root->left,maxi);
            f(root->right,maxi);
        };f(root,-1e9);return cnt;
        
    }
};