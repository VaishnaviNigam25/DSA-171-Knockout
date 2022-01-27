class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        int n = l.size(),ans=0;
        int start = 0,end = n-1,mid=0;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(l[mid]==target) // if found then continue searching for the greater element since there can be repeated elements
           start=mid+1;
            else if(target<l[mid]) // store this bcz it can be the answer since at this point the element is bigger than the target
            {
                ans=mid;
               end=mid-1;
                
            } 
            else if(target>l[mid]) //continue searching in the 2nd half for greater elem
            {
                start=mid+1;
                
            }
        }
        
        
        return l[ans];
    }
};
