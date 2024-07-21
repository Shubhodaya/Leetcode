class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n= nums.size();
        vector<long long>d(n,0);

        for( int i=0;i<n;i++){
            d[i]=target[i]-nums[i];
        }
        long long dif=0,inc=0,dec=0,ans=0;
        
        for( int i=0;i<n;i++){
            dif=d[i];
            
            if(dif>0){
                if(dif>inc)ans+=dif-inc;
                inc=dif;
                dec=0;
            }else if(dif<0){
                if(abs(dif)>dec)ans+= abs(dif)-dec;
                dec=abs(dif);
                inc=0;
            }else{
                inc=0;dec=0;
            }
        
        }

return ans;
    }
};