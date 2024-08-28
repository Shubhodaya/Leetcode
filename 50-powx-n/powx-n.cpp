class Solution {
    double f(double x, long n){
        if(n==0)return 1;

        if(n<0)return 1.0/f(x,-n);

        if(n%2)return x*f(x*x,(n-1)/2);
        else return f(x*x,n/2);
    }
public:
    double myPow(double x, int n) {
        return f(x,static_cast<long>(n));
    }
};