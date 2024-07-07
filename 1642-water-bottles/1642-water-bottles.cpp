class Solution {
public:
    int numWaterBottles(int n, int e) {  // o=10 e=13
        int p=0;
        int i=n;

        while(n>=e){
            p+=n/e;
            int k= n%e;
            n=n/e;
            n+=k;
        }
        return  (i+p);
        
    }
};