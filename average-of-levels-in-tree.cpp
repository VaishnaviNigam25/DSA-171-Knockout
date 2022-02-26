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
    void level(TreeNode* root,vector<double>& avg)
    {
        queue<TreeNode*> q;
        q.push(root);
        int n;
        double sum;
        while(!q.empty())
        {
            n=q.size();
            sum=0.0;
            for(int i=0;i<n;i++)
            {
                TreeNode* node= q.front();
                sum+=node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                q.pop();
                
            }
           avg.push_back(sum/n) ;
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double> avg;
        
        level(root,avg);
        return avg;
    }
};
