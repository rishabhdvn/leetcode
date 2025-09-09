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
    vector<int> postorderTraversal(TreeNode* root) {
            vector<int> res;
        if(!root)
         return res;
        stack<TreeNode*> s;

        TreeNode* current=root;
        TreeNode* lastvisited=NULL;
        while(current!=NULL || !s.empty()){
            if(current!=NULL){
                s.push(current);
                current=current->left;
            }
            else
            { 
                TreeNode* topnode=s.top();
                if(topnode->right!=NULL && lastvisited!=topnode->right){
                    current=topnode->right;
                }
                else
                {
                    res.push_back(topnode->val);
                    lastvisited=topnode;
                    s.pop();
                    current=NULL;
                }
            }
        }
          return res;
    }
};