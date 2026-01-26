//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        
        
        //Approach Using Two Nested Loops
        //T.C =>O(N^2)
        //S.C. =>O(1)
        
        vector<int> ans;
        set<int> set;
        int n =a.size(),m=b.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    set.insert(a[i]);
                    
                }
            }
        }
        
                return vector<int>(set.begin(),set.end());

        
        
        //Approach Using Sorting
        //T.C =>O(nlogn +mlogm)
        //S.C =>O(1)
        int n =a.size(),m=b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> ans;
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                if(ans.empty() || ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            j++;
            }
            
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
            
        }
       
        return ans;
    }
};