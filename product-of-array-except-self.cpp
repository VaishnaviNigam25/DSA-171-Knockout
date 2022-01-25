class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> leftside(nums.size(),1);
     vector<int> rightside(nums.size(),1);   
        int n =nums.size();
        int product=1;
        //leftside
        for(int i=0;i<n;i++)
        {
            product*=nums[i];
            leftside[i]=product;
        }
        //rightside
        product=1;
        for(int i=n-1;i>=0;i--)
        {
            product*=nums[i];
            rightside[i]=product;
        }
        product=1;
        for(int i=0;i<n;i++)
        {
           if(i==0)
              nums[i]= rightside[1];
            else if(i==n-1)
              nums[i]= leftside[n-2];
            else
                nums[i]=leftside[i-1]*rightside[i+1];
        }
        return nums;
    }
};
