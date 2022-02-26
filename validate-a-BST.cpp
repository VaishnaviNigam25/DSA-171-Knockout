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
     bool isValid(TreeNode* root,long long minval,long long maxval) {
        if(root==NULL)
           return true;
        if(root->val>=maxval or root->val<=minval)
            return false;
            
        return isValid(root->left,minval,root->val) and isValid(root->right,root->val,maxval);
    }
    
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL and root->right==NULL)
            return true;
        /////////// NOTE THE USE OF LONG_MIN LONG_MAX ///////////////////
        return isValid(root,LONG_MIN,LONG_MAX);
    }
};
   
