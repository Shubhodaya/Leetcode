class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mp=0;

        int mini=p[0];
        for( int i=0;i<p.size();i++){
            mini=min(p[i],mini);
            mp=max(mp,p[i]-mini);
        }
return mp;
        
    }
};