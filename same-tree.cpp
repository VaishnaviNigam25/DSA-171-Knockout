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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        
        /***Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.*/
        
        
      //when both reach NULL simultaneously return true
        if(p==NULL and q==NULL)
            return true;
        //when one is NULL and other is non-NULL node return false
        if(p!=NULL and q==NULL or q!=NULL and p==NULL)
            return false;
        
        //when both are nodes have different values return false
        if( p->val!=q->val)
            return false;
        //if any left subtree returns false,return false immidiately without checking further
        if(!isSameTree(p->left,q->left))
            return false;
        //if any right subtree returns false,return false immidiately without checking further
        if( !isSameTree(p->right,q->right))
           return false;
        
        //if all conditions staisfy return true at the end
        return true;
        
        
    }
};
