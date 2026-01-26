    int maxSubarraySum(vector<int> &arr) {
        // Code here

        //Approach =>Brute Using Two Nested Loops
        //T.C. =>O(N^2)
        //S.C. =>O(1)
        
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                maxi=max(maxi,sum);
             
                
            }
        }
                int sum=0,maxi=INT_MIN,n=arr.size();
        //Approach =>Brute Using Kadane Algo
        //T.C. =>O(N)
        //S.C. =>O(1)
        // for(int i=0;i<n;i++){
        //     sum+=arr[i];
        //     maxi =max(maxi,sum);
        //     if(sum<0){
        //         sum=0;
        //     }
        // }
        return maxi;
    }
