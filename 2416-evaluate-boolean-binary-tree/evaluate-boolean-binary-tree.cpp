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
    private:
    bool f(TreeNode* root){
        if(!root->left && !root->right)return root->val;

        if(root->val==2){
            return f(root->left)|f(root->right);
        }else
        return f(root->left)&f(root->right);
    }
public:
    bool evaluateTree(TreeNode* root) {
        return f(root);
    }
};