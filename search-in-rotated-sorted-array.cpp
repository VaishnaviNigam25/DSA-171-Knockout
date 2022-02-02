class Solution {
public:
    int search(vector<int>& nums, int t) {
        //since the array is sorted & rotated the target can be present in either side of the pivot element, that is inside any one monotonous range,be it LINE 1 OR LINE 2

       
/*   LINE 1   7/
            6/ |
          5/   |
        4/     |
               |     /2
               |   /1     LINE 2
               |/0   */
        
        int s= 0,e=nums.size()-1,mid=0;
        while(s<=e)
        {
            mid= (s+e)/2;
            //if mid is the targeted elem
            if(nums[mid]==t)
                return mid;
            //if mid comes to be in line 1
            if(nums[mid]>=nums[s])
            {
                if(nums[mid]>t && nums[s]<=t)
                    e=mid-1;
                    else
                        s=mid+1;
            }
            //if the mid comes to be in line 2
            else
            {
                if(nums[e]>=t && nums[mid]<t)
                    s=mid+1;
                else
                    e=mid-1;
            }
                
        }
        return -1;
                  
    }
};
