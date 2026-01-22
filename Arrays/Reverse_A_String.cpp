// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        
        //Approach-1 Using extra space that is another string
        
        
        // T.C. =>O(N)
        // S.C. =>O(1)
        int n =s.length();

        string temp=s;
        for(int i=0;i<n;i++){
            temp[i]= s[n-i-1];
        }
        return temp;
        
        //Approach -2 Using inbuilt reverse function
        // T.C. =>O(N)
        // S.C. =>O(1)
        reverse(s.begin(),s.end());
        return s;
        
        //Approach -3 Using two pointers approach
        
        // Move a ptr to start & another to end & swap start and end after that increment start & decrement end
        // T.C. =>O(N)
        // S.C. =>O(1)
        int n =s.length();
        int st=0,e=n-1;
        while(st<e){
            swap(s[st++],s[e--]);
        }
        return s;
        
    }
};
