class Solution {
public:
    bool search(vector<int>& nums, int t) {
        int s =0, e= nums.size()-1,mid;
        while(s<=e)
        {
            //find the middle element
            mid = (s+e)/2;
            
            //if elem present
            if(nums[mid]==t)
                return true;
        
           //special condition checck if nums[mid]== nums[left] == nums[right] before the original logic, and if so, we can move left and right both towards the middle by 1. and repeat.
             if( (nums[s] == nums[mid]) && (nums[e] == nums[mid])  ) {++s; --e;}

        //if line 1 is in order
           else if(nums[mid]>=nums[s])
            {
                if(t>=nums[s]&&t<nums[mid])
                    e=mid-1;
                else
                    s=mid+1;
            }
        
        //if line 2 
            else
            {
                if(t>nums[mid] && t<=nums[e])
                    s=mid+1;
                else
                    e=mid-1;
            }
        }
        
      return 0;
    }
};
