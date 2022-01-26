class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MOORE VOTING ALGORITHM O(N)TIME & O(1)SPACE
        int count=0,candidate=0;
        for(auto el: nums)
        {
            if(count==0) //BASE CONDITION
                candidate = el; 
            
           if(el==candidate)
                count++;
            else
                count--;
        }
      return candidate;  
    }
};
