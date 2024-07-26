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
bool x=true;
    private :
    
     int f(TreeNode* root){

        if(root==nullptr)return 0;

        int a=f(root->left);
        int b= f(root->right);
        if(abs(a-b)>1)x=false;

        return max(a,b)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
       
       int h=f(root);
       return x;
        
    }
};