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
    void zigzag(TreeNode* root,vector<vector<int>> &ans){
       //this will tell us the direction in which the elements are to be inserted
        bool lefttoright= true;
        
        //create a queue for lvl order traversal
        queue<TreeNode*> q;
        q.push(root);
        
        //while queue is not empty
        while(!q.empty())
        {
            //storing the size of queue (NO OF ELEMENTS IN A LEVEL)
             int s = q.size();
             
            //create a temp row vector wich will contain the elements of a level
            vector<int> row(s);
            for(int i=0;i<s;i++)
            {
                //acceseing the first node
                  TreeNode* node = q.front();
                  
                 
                  //inserting in the row depending upon the condition
                 if(lefttoright)
                   row[i] = node->val;
                else
                    row[s-i-1]= node->val;
                 //if left child exists puts it inqueue
                 if(node->left)
                    q.push(node->left);
                  //if right child exists puts it inqueue
                if(node->right)
                    q.push(node->right);
                
                //remove the first elem
                  q.pop();
             }
            //after each level reverse the direction
            lefttoright = !lefttoright;
            
            //insert the level in the final ans
            ans.push_back(row);
        }        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if(!root)
            return {};
        vector<vector<int>> ans;
        zigzag(root,ans);
        return ans;
    }
};
