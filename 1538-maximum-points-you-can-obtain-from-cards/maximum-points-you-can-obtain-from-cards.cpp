class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int n=cp.size(),ans=0;
     vector<int>p(k+1),s(k+1);
p[0]=0;int x=0;
     for(int i=0;i<k;i++ ){x+=cp[i];p[i+1]=x;}
x=0;
s[0]=0;
     for(int i=n-1;i>=n-k;i-- ){x+=cp[i];s[n-i]=x;}

     for(int i=0;i<=k;i++)ans= max(ans,p[i]+s[k-i]);

     return ans;
    }
};