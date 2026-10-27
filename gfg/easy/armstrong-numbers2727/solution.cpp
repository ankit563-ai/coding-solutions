class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int d=n;
        int s=0;
        while(n>0){
            int l=n%10;
            s=s+(l*l*l);
            n=n/10;
            
        }
        if(s==d){
            return true;
        }
        else{
            return false;
        }
    }
};