class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       //handling corner case
        if(k<=1) return 0;
        int count=0;
        int n = nums.size();
        //left window pointer, right window pointer
        int left=0,right=0;
        int pro=1;
        
        //while right pointer is less than the size of array
        while(right<n)
        {
            //calculating the Product
            pro=pro*nums[right];
           
            //if product is >= k ,
            while(pro>=k)
            { 
                // keep reducing till it reaches < k
                pro=pro/nums[left++];
            }
            
                //increasing the no of subarrays by the window length
                count = count+ (right-left+1);
                 right++;
        }
        return count;
    }
};
