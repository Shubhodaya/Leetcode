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
    vector<int> f(TreeNode* root){

        if(!root)return {0,0};
       
       vector<int> l= f(root->left);
       vector<int> r= f(root->right);

       int wr= root->val + l[1] + r[1];
       int withoutr= max(l[0],l[1])+max(r[0],r[1]);

       return {wr,withoutr};

    }
public:
    int rob(TreeNode* root) {
        vector<int>r=f(root);
        return max(r[0],r[1]);
    }
};