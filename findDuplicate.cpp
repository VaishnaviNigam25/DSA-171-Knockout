class Solution {
public:
     int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (auto &num : nums) {
            if (set.count(num) ==1)
                return num; // this is the duplicate number
            set.insert(num);//else keep inserting
        }
        return -1;
    }
};
