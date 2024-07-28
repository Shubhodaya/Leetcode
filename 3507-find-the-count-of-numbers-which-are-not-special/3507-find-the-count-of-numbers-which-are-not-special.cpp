class Solution {
    bool isPrime(int n){
        if(n==1)return 0;
        if(n==2 ||n==3)return 1;
        for( int i=2;i<=sqrt(n);i++){
            if( n%i==0)return 0;
        }
        return 1;
    }
public:
    int nonSpecialCount(int l, int r) {
vector<int>p;
for ( int i=2;i<=sqrt(r);i++){
if(isPrime(i))p.push_back(i);
}

int c=0;

for( int i=0;i<p.size();i++){
    if(p[i]>r)break;
    int k=p[i]*p[i];
       
          if(k>=l && k<=r){
            c++;
            }
}
return r-l+1-c;

        
    }
};