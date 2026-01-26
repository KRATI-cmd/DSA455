     // code here

        sort(arr.begin(), arr.end());
        int n =arr.size();          if (n == 1) return 0;

        int fir =arr[0]+k;
        int last =arr[n-1]-k,ans=INT_MAX;
        
        for(int i=1;i<n;i++){
            int mini=min(fir,arr[i]-k);
            int maxi=max(last,arr[i-1]+k);
            if(mini<0) continue;
            ans =min(maxi-mini,ans);

        }
        return min(ans,arr[n-1]-arr[0]);
    }