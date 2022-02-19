/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       //THE PROPERTY OF BST THAT THE LEFT SUBTREE WILL HAVE VALUES LESS ,AND RIGHT SUBTREE MORE THAN THE ROOT NODE
        //USING THIS PROPERTY WE WILL FIND THE LCA
        
        
        //when both p and q are less than root , move to left subtree,since LCA exists there
    if(p->val < root->val and q->val < root->val)
    return lowestCommonAncestor(root->left,p, q);   
          //when both p and q are more than root , move to right subtree,since LCA exists there
    if(p->val > root->val and q->val >root->val)
    return lowestCommonAncestor(root->right,p, q); 
        //when one is greater than the root and other is smaller than the root, then the root itself is their LCA , so return root;
  
     return root;
        
    }
};
