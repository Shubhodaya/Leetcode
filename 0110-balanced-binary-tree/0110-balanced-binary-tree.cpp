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

    
    int dfsheight(TreeNode* root){
        if(!root)return 0;


        int l=dfsheight(root->left);
        if(l==-1)return -1;
        int r=dfsheight(root->right);
        if(r==-1)return -1;

        if(abs(r-l)>1)return -1;

        return max(l,r)+1;
    
    }
    bool isBalanced(TreeNode* root) {

    
        return (dfsheight(root)!=-1);
    }
};