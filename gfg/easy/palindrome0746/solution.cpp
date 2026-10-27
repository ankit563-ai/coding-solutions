class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        if(n<0){
           n=-n;
        }
      int d=n;
      long long r=0;
      while(n>0){
          int l=n%10;
          r=(r*10)+l;
          n=n/10;
      }
      if(r==d){
          return true;
      }
      else{
          return false;}
    }
};