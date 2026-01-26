    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        
        //Approach Using Extra Space Using Set
        //T.C. =>O((N + M) log(N + M))
        //S.C. =>O(N+M)
        unordered_set<int> set;
        int n =a.size(),m=b.size();
        for(int i=0;i<n;i++){
            set.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            set.insert(b[i]);
        }
        
        vector<int> ans;
        for(auto it:set){
            ans.push_back(it);
        }
        return ans;
        
        
        //Approach Using Sorting
        //T.C. =>O(NlogN+MlogM)
        //S.C. =>O(1)
        
        
        sort(a.begin(),a.end());
        vector<int> ans;
        sort(b.begin(),b.end());
        
        int n =a.size(),m=b.size();
    
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                if(ans.empty() || ans.back()!=a[i]){
                ans.push_back(a[i]);
                }
                i++;
            }
            
             else if(a[i]==b[j]){
                                 if(ans.empty() || ans.back()!=a[i]){

                ans.push_back(a[i]);
                                 }
                i++;
                j++;
            }
            else{
                                if(ans.empty() || ans.back()!=b[j]){

                   ans.push_back(b[j]);
                                }
                j++;
            }
        }
        
        while(i<n){
            if(i<n && a[i]!=ans.back()){
            ans.push_back(a[i]);
            }
                i++; 
        }
        
          while(j<m){
              if(j<m && b[j]!=ans.back()){
            ans.push_back(b[j]);
              }
                j++; 
        }
        return ans;
    }
