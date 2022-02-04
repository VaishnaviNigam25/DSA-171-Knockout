class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    /*O(N) APPROACH*/
        
     /*if you ignore the - sign the array is sorted in increasing order from the middle,hence we use the left and right pointer approach*/
        int k=nums.size();
        vector<int> ans(k);
        k--;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(abs(nums[r])>abs(nums[l]))
            {   
                ans[k--]=(nums[r]*nums[r]);
                r--;
            }
            else
            {
                ans[k--]=(nums[l]*nums[l]);
                l++;
                    
            }
        }
        return ans;
    }
};

/*O(NLOGN) APPROACH

for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
        */
