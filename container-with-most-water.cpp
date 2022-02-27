class Solution {
public:
    int maxArea(vector<int>& ht) {
        //one pointer is extreme left & extreme right
       int i=0,j=ht.size()-1;
        int curr_area,max_area=0;
        while(i<j)
        {
         //idea is to find the minimum ht -> find area -> and move inwards
            
            //if left ht is minimum
           if(ht[i]<ht[j])
           {
               curr_area=ht[i]*(j-i);
                   i++;
           }
            //if right ht is minimum
            else
            {
               curr_area=ht[j]*(j-i);
                   j--;
           
            }
            max_area= max(max_area,curr_area);
        }
        return max_area;
    }
};
