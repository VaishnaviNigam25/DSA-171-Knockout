
    int maximumSumSubarray(int k, vector<int> &Arr , int N){
        
        int i=0,n=Arr.size(),j=0,sum=0,maxi=INT_MIN;
        while(j<n)
        {
           sum+=Arr[j];
          //till window is not found
            if(j-i+1<k)
            {
              j++;  
            }
            //if window is found
            else if(j-i+1==k)
            {
                maxi=max(sum,maxi);
                sum-=Arr[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};

