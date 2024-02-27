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

    int f(TreeNode* p,int &ans){

        if(!p)return 0;
           
        ans=max(ans,f(p->left,ans)+f(p->right,ans));
        return max(f(p->left,ans),f(p->right,ans))+1;

        


    }

        int diameter(TreeNode* curr, int& res){
        // Base case: if the current node is null, return 0
        if (!curr) return 0;
        
        // Recursively calculate the diameter of left and right subtrees
        int left = diameter(curr->left, res);
        int right = diameter(curr->right, res);

        // Update the maximum diameter encountered so far
        res = std::max(res, left + right);
        
        // Return the depth of the current node
        return std::max(left, right) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        

        int ans=0;
        diameter(root,ans);
        return ans;
    }
};