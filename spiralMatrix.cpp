class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        //calc the no of rows and cols
        int row = mat.size(),col = mat[0].size();
        //calc total no of items
        int count =0 , total = row*col;
        //declaring ans vector
         vector<int> ans;
        
        
        //assigning indexes
        int startrow = 0;
        int endcol = col-1;
        int endrow = row-1;
        int startcol = 0;
        
        while(count<total)
        {
             //startingrow
            for(int ind =startcol;count<total && ind<=endcol;ind++)
            {
                //pushing elements in spiral order and modifying startrow
                ans.push_back(mat[startrow][ind]);
             count++;     
            }
               startrow++;
                
            //endingcol
            for(int ind =startrow;count<total && ind<=endrow;ind++)
            {
                //pushing elements in spiral order and modifying endcol
                ans.push_back(mat[ind][endcol]);
                count++;
           }
             endcol--;
                
             //endingrow
            for(int ind = endcol;count<total && ind>=startcol;ind--)
            {
                //pushing elements in spiral order and modifying startrow
                ans.push_back(mat[endrow][ind]);
               count++;  
            }
             endrow--;
                 
             //startingcol
            for(int ind =endrow;count<total && ind>=startrow;ind--)
            {
                //pushing elements in spiral order and modifying startrow
                ans.push_back(mat[ind][startcol]);
                count++;    
            }
            startcol++;
  
        }
        return ans;
        
    }
};
