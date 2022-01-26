class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        //taking out the transpose first
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<i;j++)  //IMPORTANT
                swap(mat[i][j],mat[j][i]);
        
        //now reversing each row to get the answe
        for(int i=0;i<mat.size();i++)
        reverse(mat[i].begin(),mat[i].end());
        
        
    }
};
