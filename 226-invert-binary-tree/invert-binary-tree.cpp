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
    private: TreeNode* f(TreeNode* root){
        if(root==nullptr)return root;

        TreeNode* temp=    f(root->left);
        root->left=f(root->right);
        root->right=temp;

     
        
        return root;
    }
public:
    TreeNode* invertTree(TreeNode* root) {

        return f(root);
    }
};