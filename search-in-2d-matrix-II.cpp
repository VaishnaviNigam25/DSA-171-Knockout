class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int r=matrix.size(),c=matrix[0].size();
        
        int rowIndex=0,colIndex=c-1;
        
        while(rowIndex <r && colIndex>=0)
        {
            int elem = matrix[rowIndex][colIndex];
            if(elem == target)
                return true;
            else if(elem>target)
                colIndex--;
            else
                rowIndex++;
        }
           
        return false;   
    }
};
