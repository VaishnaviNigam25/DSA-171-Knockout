
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> ans;
        unordered_set<int>set;
        for(auto el:nums)
        {
            if(set.count(el))
                ans.push_back(el);
            else
                set.insert(el);
        }
        return ans;
    }
};
