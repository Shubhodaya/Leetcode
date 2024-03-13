class Solution {
public:
    int pivotInteger(int n) {
 if(n==1)return 1;
        int sum=(n*(n+1))/2;

        for(int i=2;i<=n;i++){

            if((i*(i+1))/2 == sum- ((i*(i-1))/2))return i;
        }
        return -1;
        
    }
};