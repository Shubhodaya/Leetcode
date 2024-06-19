class Solution {

    int f(int d,vector<int>& bd, int m, int k){
        int n=bd.size();
        vector<int>v(n,0);
    

        for(int i=0;i<n;i++){
            if(bd[i]<=d)v[i]=1;
        }

        int c=0,cnt=0;
if(v[0]==1)cnt=1;
        for(int i=1;i<n;i++){

            if(i==n-1){
                if(v[i]==1)cnt++;
                c+=(cnt/k);
                continue;
            }
                if(v[i]==1)cnt++;
                else{
                    c +=(cnt/k);
                    cnt=0;
                }

        }
        cout<<c<<endl;

        if(c>=m)return 1;
        else return 0;


    }
public:
    int minDays(vector<int>& bd, int m, int k) {
        int64_t f1= (int64_t)m * (int64_t)k;
        if((int64_t)bd.size()<f1)return -1;
        int n=bd.size();



int maxi=-1;
for(int i=0;i<n;i++)maxi=max(maxi,bd[i]);

int l=1,r=maxi;
int ans=maxi;

while(l<=r){
     int mid=(l+r)/2;

     if(f(mid,bd,m,k)){
        ans=mid;
        r=mid-1;
     }else{
        l=mid+1;
     }

}


return ans;


        
    }
};