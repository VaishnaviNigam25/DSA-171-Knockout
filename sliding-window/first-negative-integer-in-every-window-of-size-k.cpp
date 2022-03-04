
vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
            
            vector<long long> ans;
            queue<long long> q;
            int i=0,j=0;
            while(j<n)
            {
                if(a[j]<0)
                q.push(a[j]);
                //till window size is not reached
                if(j-i+1<k)
                {
                    j++;
                }
                else if(j-i+1 ==k)
                {
                    //if queue is empty - means no -ve elem in that current window- insert 0
                    if(q.size()==0)
                    {
                        ans.push_back(0);
                    }
                    else
                    {
                    ans.push_back(q.front());
                    
                    if(q.front()==a[i])
                    {
                        q.pop();
                    }
                    }
                    
                    i++;
                    j++;
                }
                
                
            }
            return ans;
 }
