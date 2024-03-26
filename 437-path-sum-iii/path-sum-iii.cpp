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
    int pathSum(TreeNode* root, int targetSum) {

        int ans=0;
   unordered_map<long, int> map;
        function<void(TreeNode*,long)>f = [&](TreeNode* root, long sum){
              
              if(!root)return ;
              sum +=root->val;

              if(sum==targetSum)ans++;

        if(map.find(sum - targetSum) != map.end())         
            ans += map[sum - targetSum];

            map[sum]++;
              f(root->left,sum);
            //   if(root->left)f(root->left,0);
              f(root->right,sum);
            //   if(root->right)f(root->right,0);

            map[sum]--;

        };
f(root,0);
return ans;

        
    }
};