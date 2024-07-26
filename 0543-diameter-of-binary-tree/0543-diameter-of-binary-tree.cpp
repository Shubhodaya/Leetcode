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
    int ans=0;
    private:

    int f(TreeNode* root){

if(root==nullptr)return 0;

      int a=  f(root->left);
      int b=  f(root->right);
      ans=max(ans,a+b+1);

      return max(a,b)+1;

       
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
int k=f(root);
return ans-1;
    
    }
};