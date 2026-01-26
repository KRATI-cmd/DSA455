  void mergeArrays(vector<int>& a, vector<int>& b) {
        // code her
        //We just need to swap the rightmost element in a[] with leftmost element in b[], then second rightmost element in a[] with second leftmost element in b[] and so on. This will continue until the selected element from a[] is larger than selected element from b[]
        
// Time Complexity: O((m+n) + m*log(m) + n*log(n)), where n and m are sizes of a[] and b[] respectively.
        int n =a.size(),m=b.size();
        int i=n-1,j=0;
        while(i>=0 && j<m){
            if(a[i]>b[j]){
               swap(a[i--],b[j++]);
               
            }
            else{
                break;
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }