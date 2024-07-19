class Solution {
public:
    int minimumCost(int m, int n, vector<int>& hc, vector<int>& vc) {

        int vs=0,hs=0;
        for(auto it:hc)hs+=it;
        for( auto it: vc)vs+=it;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());

        int i=m-2,j=n-2;
        int ans=0;
        while(i>=0 && j>=0){
            if(hc[i]>vc[j]){
              ans+= hc[i];
              ans+=vs;
              hs-=hc[i];
                i--;
            }else{
                 ans+= vc[j];
              ans+=hs;
              vs-=vc[j];
                j--;
            }
        }

        return ans+hs+vs;

        
    }
};