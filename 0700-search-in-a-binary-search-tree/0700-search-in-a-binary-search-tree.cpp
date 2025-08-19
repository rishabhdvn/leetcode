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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return root;
        TreeNode* current=root;
        while(current!=NULL){
            if(current->val==val){
                return current;
            }
            else if(val<current->val){
                current=current->left;
            }
            else{
                current=current->right;
            }
        }
        return NULL;
    }
};