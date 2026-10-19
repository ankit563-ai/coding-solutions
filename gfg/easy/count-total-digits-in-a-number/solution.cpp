class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int c=0;
        if(n==0){
            return 1;
        }
        while(n>0){
            int l=n%10;
            c++;
            n=n/10;
        }
        return c;
        
    }
};