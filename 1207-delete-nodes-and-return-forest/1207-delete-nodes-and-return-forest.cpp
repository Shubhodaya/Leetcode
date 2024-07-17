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
     void f(TreeNode* & root,vector<TreeNode*>&v,set<int>& st, int p){
        if(root==NULL)return;
   
              f(root->left,v,st,p);
              f(root->right,v,st,p);
 int x=root->val;

 if(st.find(x)!=st.end()){

if(root->left)v.push_back(root->left);
if(root->right)v.push_back(root->right);
root=NULL;
    
 }


     }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*>v;
        set<int>st;
        for( auto it: to_delete)st.insert(it);
        // TreeNode* r1=root

        f(root,v,st,1);

        if(root){
    v.push_back(root);
}
return v;
    }
};