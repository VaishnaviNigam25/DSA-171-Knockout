class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int as=0;
        for(auto el: nums)
            as= as^el;
        
        return as;
    }
};
