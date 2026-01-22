    void sort012(vector<int>& arr) {
        // code here
        
        //Approach Using Count
        int n =arr.size();
        // Count each variable of zero,one & two 
        //Then place zero element, then all element of one & then two
        
        //T.C =O(N)
        //S.C=>O(1)
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) c0++;
            else if(arr[i]==1) c1++;
            else c2++;
        }
        int i=0;
        while(i<c0){
            arr[i]=0;
            i++;
        }
        while(i<c0+c1){
            arr[i]=1;
            i++;
        }
        while(i<c0+c1+c2){
            arr[i]=2;
            i++;
        }
        
        
        //Approach Using Dutch Flag ALGO
        //T.C =O(N)
        //S.C=>O(1)
        
        int l=0,m=0,h=n-1;
        
        while(m<=h){
            if(arr[m]==0){
                swap(arr[l++],arr[m++]);
            }
            else if(arr[m]==1){
                m++;
            }
            else{
                swap(arr[m],arr[h--]);
            }
        }
    }
