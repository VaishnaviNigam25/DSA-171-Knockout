class Solution {
public:
    //DUTCH NATIONAL FLAG ALGORITHM
    //KEEPING THREE POINTERS AS LOW MID & HIGH
    //EVERYTHING LEFT OF LOW IS 0
    //EVERYTHING RIGHT OF MID IS 2
    //EVERYTHING BETWEEN LOW & MID IS 1
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
                swap(nums[low++],nums[mid++]);
            else if(nums[mid]==1)
                mid++;
            else if(nums[mid]==2)
                swap(nums[mid],nums[high--]);
        }
    }
};
