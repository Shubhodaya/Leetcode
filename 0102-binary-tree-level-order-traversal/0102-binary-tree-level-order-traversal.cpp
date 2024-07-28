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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;

        q.push(root);
vector<vector<int>>v;
if(root==nullptr)return v;
        while(!q.empty()){
int n=q.size();
vector<int>temp;
while(n--){
    TreeNode* t= q.front();
    q.pop();
    if(t->left)q.push(t->left);
    if(t->right)q.push(t->right);
temp.push_back(t->val);

}

v.push_back(temp);
    
        }

        return v;
        
        
    }
};