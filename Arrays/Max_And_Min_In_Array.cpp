
    vector<int> getMinMax(vector<int> &arr) {
        //Approach Using sort
        sort(arr.begin(),arr.end());
        return {arr[0],arr[arr.size()-1]};
        
        
        //Approach Using min and max function
         //Time Complexity
        
        //T.C =>O(N)
        //S.C. =>O(1)
        vector<int> ans;
        int maxi=-1,mini=INT_MAX;
        int n =arr.size();
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        
        ans.push_back(mini);
        ans.push_back(maxi);
        
        
        
        
         //Approach Using min_element and max_element function
         //Time Complexity
        
        //T.C =>O(N)
        //S.C. =>O(1)
        vector<int> ans;

        int maxi =*max_element(arr.begin(),arr.end());
        int mini =*min_element(arr.begin(),arr.end());
       
        
        ans.push_back(mini);
        ans.push_back(maxi); 
        
        
        return ans;
    }
