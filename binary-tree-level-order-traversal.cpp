void helper(vector<vector<int>>& ans,TreeNode* root)
    {
        queue<TreeNode*> level;
       
        
        level.push(root);
        while(!level.empty())
        {
             vector<int> vec;
            int n= level.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = level.front();
                vec.push_back(curr->val);
                
            
                if(curr->left)
                    level.push(curr->left);
                if(curr->right)
                    level.push(curr->right);
                level.pop();
            }
            
            ans.push_back(vec);
        }
        
    }
