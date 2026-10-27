class Solution {
  public:
    int countDigits(int n) {
        // Code here
    
    if(n==0){
        return 1;
    }
    int c=(int)(log10(n)+1);
   return c;
        
    }
    
};