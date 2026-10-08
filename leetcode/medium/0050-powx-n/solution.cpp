class Solution {
public:
    double myPow(double x, int n) {
        double a=1;
        long y=n;
        if(y<0) y=-1*y;
        while(y>0){
            if(y%2==1){
                a=a*x;
                y=y-1;
            }
            else{
                x=x*x;
                y=y/2;
            }
        }
        if(n<0) a=(double)(1.0)/(double)(a);
        return a;
    }
};