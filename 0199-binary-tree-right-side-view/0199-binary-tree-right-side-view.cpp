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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)return {};
        vector<int>v;
        q.push(root);

        while(!q.empty()){
           
            int n=q.size();
            for( int i=0;i<n-1;i++){
 auto it=q.front();
 q.pop();
 if(it->left)q.push(it->left);
 if(it->right)q.push(it->right);
            }

auto it=q.front();
v.push_back(it->val);
 q.pop();
 if(it->left)q.push(it->left);
 if(it->right)q.push(it->right);



        }

        return v;

    
        
    }
};