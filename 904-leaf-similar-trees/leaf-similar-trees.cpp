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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;

        function <void(TreeNode*,vector<int>&)>f= [&](TreeNode* root,vector<int>&c){
            if(!root)return;
            if(root->left==nullptr && root->right==nullptr)c.push_back(root->val);
            f(root->left,c);
            f(root->right,c);
        };f(root1,a);f(root2,b);
        // for(auto it:a)cout<<it<<endl;
        // cout<<">>>>>>>>"<<endl;
        // for(auto it:b)cout<<it<<endl;
        return a==b;
        
    }
};