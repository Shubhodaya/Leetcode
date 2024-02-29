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
    bool isEvenOddTree(TreeNode* root) {

        queue<TreeNode*> q;
        
        if(root->val%2==0)return 0;

        q.push(root);

int l=1;
        while(!q.empty()){

  int sz=q.size();
  
  int prev;
  for(int i=0;i<sz;i++){
      TreeNode* curr=q.front();
      int an=curr->val;
      q.pop();
      if(i>0){
              if((an%2==0 && l%2==1)||(an%2==1 && l%2==0))return 0;  
              if(((l%2==0)&&(an>=prev)) || ((l%2==1)&&(an<=prev))) return 0;
      }else{
                if((an%2==0 && l%2==1)||(an%2==1 && l%2==0))return 0; 

      }
      prev=curr->val;

      if(curr->left)q.push(curr->left);
      if(curr->right)q.push(curr->right);


  }l++;

        }
        return 1;
        
    }
};