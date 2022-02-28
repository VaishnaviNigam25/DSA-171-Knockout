class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        //at first we do sorting , so that we can apply TWO_POINTER logic
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        //keeping a as constant by moving linearing in array O(N) till 3rd last elemnet
        for(int i=0;i<nums.size()-2;i++)
        {
            //to ignore duplicate elements
            if(i==0 or (i>0 and nums[i]!=nums[i-1]))
            {
                int j=i+1,k=nums.size()-1;
                //if nums[i]+nums[j]+nums[k]=0 --> answer !!
                
                while(j<k)
                {
                    
                    //if we find the triplet
                    if(nums[j]+nums[k]== -nums[i])
                    {
                        //insert this combination into ans;
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[k]);
                        res.push_back(ans);
                    
                   //keep moving j forward till we get same elemnts 
                    while(j<k and nums[j]==nums[j+1])
                        j++;
                    //keep moving k backward till we get same elemnts
                    while(j<k and nums[k]==nums[k-1])
                        k--;
                    
                        //move to the unique element
                            j++;
                         //move to the unique element
                             k--;
                    }
                    
                    //if the sum is less than nums[i] increase j
                    else if(nums[j]+nums[k]< -nums[i])
                        j++;
                    //if the sum is more than nums[i] decrease k
                    else
                        k--;
                    
                }
              
            }
        }
        return res;
        
    }
};
