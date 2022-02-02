class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),i=0,j=n-1;
        vector<int> prefix(n);
         vector<int> suffix(n);
       
        int minimum = INT_MAX,maximum = INT_MIN;
        for(auto el: prices)
        {
            minimum = min(minimum,el);
            prefix[i++]=minimum;
        }
         for( j=n-1;j>=0;j--)
        {
             maximum= max(maximum,prices[j]);
            suffix[j]=maximum;
        }
        maximum=0;
        for(i=0;i<n;i++)
        {
            prices[i]=suffix[i]-prefix[i];
            maximum = max(maximum,prices[i]);
        }
        return maximum;
    }
};
