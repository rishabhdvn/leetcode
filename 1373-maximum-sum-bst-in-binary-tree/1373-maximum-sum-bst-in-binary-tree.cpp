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
    struct Info{
        bool isBst;
        int sum;
        int minVal;
        int maxVal;  
    };
    int maxSum=0;
public:
Info dfs(TreeNode* Node){
    if(Node==NULL) return {true,0,INT_MAX,INT_MIN};
    auto left=dfs(Node->left);
    auto right=dfs(Node->right);
    if(left.isBst && right.isBst && Node->val>left.maxVal && Node->val<right.minVal){
        int currSum=left.sum+right.sum+Node->val;
        maxSum=max(maxSum,currSum);
        return{true,currSum,min(Node->val,left.minVal),max(Node->val,right.maxVal)};
    }
    return {false,0,0,0};

    
}
    int maxSumBST(TreeNode* root) {
        dfs(root);
        return maxSum;
    }
};