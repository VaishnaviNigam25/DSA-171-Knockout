class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int r=mat.size(),c=mat[0].size(),col0=1;
        
        //linearly traversing and taking 1st row & 1st column as dummy and marking them as 0
        for(int i=0;i<r;i++)
        {
            if(mat[i][0]==0) col0=0;
           for(int j=1;j<c;j++)
           {
               if(mat[i][j]==0)
                   mat[i][0]=mat[0][j]=0;
           }
        }
        
        //traversing backwards from last row last column so tht the dummy row & col remain unchanged
        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>0;j--)
            {
                if(mat[i][0]==0 || mat[0][j]==0)
                    mat[i][j]=0;
            }
            if(col0==0)
                    mat[i][0]=0;
        }
    }
};
