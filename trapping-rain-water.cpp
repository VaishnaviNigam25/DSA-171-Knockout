class Solution {
public:
    int trap(vector<int>& ht) {
        
        int n = ht.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0]=ht[0];
        right[n-1]=ht[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=max(ht[i],left[i-1]);
        }
          for(int i=n-2;i>=0;i--)
        {
            right[i]=max(ht[i],right[i+1]);
        } 
        for(int i=0;i<n;i++)
        {
            ht[i]=abs(min(left[i],right[i])-ht[i]);
        }
        int sum=0;
        for(auto el:ht)
            sum+=el;
        return sum;
        
    }
};
