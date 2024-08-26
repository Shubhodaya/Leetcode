class Solution {
public:
    int reverse(int x9) {
        long long k=0;

        int l=-1*pow(2,31);
        int h=pow(2,31)-1;
        int t=0;
        if(x9<0)t=1;
        long long x=x9;

        if(x<0)x*=-1;
int c=0,x1=x;
        while(x1){
            x1/=10;
            c++;
        }
c--;
        while(x){
            int d=x%10;
            k+= d*pow(10,c);
            c--;
            x/=10;

        }



        if(t)
        k=-1*k;
    
    if(k<l || k>h)return 0;

    return k;
    }
};