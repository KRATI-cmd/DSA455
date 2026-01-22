    int kthSmallest(vector<int> &arr, int k) {
        // code here
        // int n =arr.size();
        // T.C =>O(nlogn)  S.C=>O(1)
        //Approach Using Sorting 
        sort(arr.begin(),arr.end());
        return arr[k-1];
        
        
        //Approach Using Max Heap
        //We need to take a max heap and eliminate that element which are greater than k so reducing time complexity by that 
        
        // T.C =>O(n log k)
        // S.C. =>O(K)
        int n =arr.size();
        priority_queue<int> maxh;
        for(int i=0;i<n;i++){
            maxh.push(arr[i]);
            if(maxh.size()>k) maxh.pop();

        }
        return maxh.top();
        
    }
