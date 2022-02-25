class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi =INT_MIN,currsum=0;
        int i=0,j=nums.size()-1;
        while(i<=j)
        {
            currsum+=nums[i++];
            
            maxi = max(currsum,maxi);
            //since -ve will eventually decrease the answer,and lead to discripcy hence each tym it bcm -ve we again make it 0
            if(currsum<0)
                currsum=0;
           
        }
        return maxi;
    }
};
