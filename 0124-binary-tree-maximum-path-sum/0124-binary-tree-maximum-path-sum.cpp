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
int max_sum=INT_MIN;
int helper(TreeNode* root){
    if(!root) return 0;
    int leftHeight=max(0,helper(root->left));
    int rightHeight=max(0,helper(root->right));
    max_sum=max(max_sum,root->val+leftHeight+rightHeight);
    return root->val+max(leftHeight,rightHeight);
}
    int maxPathSum(TreeNode* root) {
        helper(root);
        return max_sum;
    }
};