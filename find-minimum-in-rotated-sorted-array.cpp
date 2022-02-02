class Solution {
public:
    int findMin(vector<int>& nums) {
        //corner case tha if it remains sorted OR only 1 elem presesnt
        if(nums[0]<nums[nums.size()-1] || (nums.size()==1))
            return nums[0];
        
            
       int s=0, e= nums.size()-1;
        int mid=0;
        while(s<=e)
        {
            mid= (s+e)/2;
            //if on answer
            if(mid!=0 && nums[mid]<nums[mid-1])
                return nums[mid];
            //if line 1
            if(nums[mid]>=nums[0] )
                s=mid+1;
            //if line 2
            else
                e=mid-1;
            
            
        }
        return 0;
    }
};
