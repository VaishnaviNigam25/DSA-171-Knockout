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
    void inorder(vector<int> &values,TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(values,root->left);
        values.push_back(root->val);
        inorder(values,root->right);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        inorder(values,root);
        return values[k-1];
    }
};
