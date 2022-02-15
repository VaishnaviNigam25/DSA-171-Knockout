class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int s=nums.size();
        int left=0,right=0,sum=0,minlen=s;
        
        while(right<s)
        {
            //until sum is less than the target and right is less than size
        while(sum<tar and  right<s)
        {
            sum+=nums[right++];
        }
            //until sum is greater than target,keep reducing the window and left remains inside the size of array
        while(sum>=tar && left<s)
        {
            minlen=min(minlen,right-left);
            
            sum-=nums[left++];
            
        }
        }
        if(sum<tar and left==0 and right==s)
            return 0;
       return minlen;
    }
};
