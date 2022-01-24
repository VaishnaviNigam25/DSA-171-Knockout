class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
       for(auto el: nums)
           set.insert(el);
        
        if(set.size()==nums.size())
            return false;
        return true;
    }
};
