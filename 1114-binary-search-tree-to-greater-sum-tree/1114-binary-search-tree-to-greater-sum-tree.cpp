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
    int sum=0;
    void f(TreeNode* root){
        
        if(root){
            f(root->right);
            sum+=root->val;
            root->val=sum;
            f(root->left);

        }
        
    } 
public:
    TreeNode* bstToGst(TreeNode* root) {

        if(root==NULL)return root;

          f(root);
        return root;
    }
};