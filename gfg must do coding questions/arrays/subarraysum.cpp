vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> ans;
        long long count;
        int i = 0,j=0;
        count = arr[0];
        while(i<n && j<n)
        {
            if(count == s)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(count < s)
            {
                j++;
                count += arr[j];
            }
            if(count > s)
            {
                if(i == j)
                {
                    i++;
                    j++;
                    count = arr[i];
                }
                else
                {
                    
                    count = count - arr[i];
                    i++;
                }
            }
        }
        vector<int> ans1;
        ans1.push_back(-1);
        return ans1;
    }