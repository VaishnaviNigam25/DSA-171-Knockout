class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //the array is sorted just like a linear array and hence we apply binary search
        //firstly we find no of row & columns
        int r= matrix.size(),c=matrix[0].size();
        int s=0,e=r*c-1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            
            // !!!!! IMPORTANT !!!!!!
            int row = mid/c;
            int col = mid%c;
            // !!!!! IMPORTANT !!!!!!
            
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        
        //if not found
        return false;
    }
};
