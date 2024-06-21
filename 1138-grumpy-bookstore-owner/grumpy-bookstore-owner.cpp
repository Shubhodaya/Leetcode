class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        
int n=c.size();
        int s=0,maxi=0,f=-1,l=-1;
        for(int i=0;i<m;i++){
            if(g[i]==1)s+=c[i];

        }

        maxi=s;
        f=0;l=m-1;
        for(int i=1;i<=n-m;i++){

if(g[i-1]==1)s-=c[i-1];
if(g[m-1+i]==1)s+=c[m-1+i];

maxi=max(maxi,s);

        }
        // cout<<maxi<<endl;
int ans=maxi;
        for(int i=0;i<n;i++){
            if(g[i]==0)ans+=c[i];
        }
        return ans;

    }
};