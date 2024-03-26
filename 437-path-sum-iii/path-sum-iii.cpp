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
        int count=0;
   unordered_map<long, int> map;
    int pathSum(TreeNode* root, int targetSum) {
 
    function<void(TreeNode*,int,long)>countPathSum = [&](TreeNode* root, int target, long sum){
        if(!root)
            return;
        sum += root->val;        //Path sum from root
        if(sum == target)
            count++;
        if(map.find(sum - target) != map.end())         //checking whether any target sum path present in the path from root to the current node
            count += map[sum - target];
        map[sum]++;
        countPathSum(root->left, target, sum);
        countPathSum(root->right, target, sum);
        map[sum]--;      //After visiting the left and right subtree, we have to reduce this path sum count from map since we are leaving this path
    };
     countPathSum(root, targetSum, 0);
     return count;



//         function<void(TreeNode*,int)>f = [&](TreeNode* root, long sum){
              
//               if(!root)return ;
//               sum +=root->val;

//               if(sum==targetSum)ans++;

//         if(map.find(sum - targetSum) != map.end())         
//             ans += map[sum - targetSum];

//             map[sum]++;
//               f(root->left,sum);
//             //   if(root->left)f(root->left,0);
//               f(root->right,sum);
//             //   if(root->right)f(root->right,0);

//             map[sum]--;

//         };
// f(root,0);
// return ans;

        
    }
};