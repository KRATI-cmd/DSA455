// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n =arr.size();
        int x =arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        return ;




        int n=arr.size();
  
    // i and j pointing to first and last
    // element respectively
    int i = 0, j = n - 1;
    while (i != j) {
        swap(arr[i], arr[j]);
        i++;
    }
    }
};