class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        
        int n=d.size();
vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
v[i]={d[i],p[i]};
        }

        sort(v.begin(),v.end());

        sort(w.begin(),w.end());

        int ans=0;
set<int>st;
int j=0;
        for(int i=0;i<w.size();i++){
while(j<n && v[j].first<=w[i]){
    st.insert(v[j].second);
    j++;
}

if(st.size()){
    ans += *(st.rbegin());
}
        }

        return ans;
        
    }
};