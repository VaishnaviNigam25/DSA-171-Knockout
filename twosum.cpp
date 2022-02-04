class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(target-nums[i]))
                return{s[target-nums[i]],i};
            else
                s[nums[i]]=i;
        }
        return {-1.-1};
    }
};
