/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int longestZigZag(TreeNode* root) {
        int maxi = 0;

        function<void(TreeNode*, int, int)> f =
            [&](TreeNode* root, int p, int sum) { // 0-->left 1-->right
                if (!root)
                    return;
                sum++;
                maxi = max(maxi, sum);
                if (p == -1) {
                        f(root->left, 0, sum);
                        f(root->right, 1, sum);
                }
                if (p == 0) {
                    f(root->right, 1, sum);
                    if(root->left) f(root->left, 0, 1);
                }
                if (p == 1 ) {
                    f(root->left, 0, sum);
                    f(root->right, 1, 1);
                }

                return;

            };
        f(root, -1, 0);
        return maxi - 1;
    }
};