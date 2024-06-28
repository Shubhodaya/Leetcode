class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>v(n,0);

        map<long long,long long>mp;

        for( auto it: roads){
            mp[it[0]]++;
            mp[it[1]]++;
        }
        
        vector<pair<long long,long long>>vp;

        for(auto it: mp)vp.push_back({it.second,it.first});
sort(vp.begin(),vp.end());

long long k=n;
for( int i=vp.size()-1;i>=0;i--){
    v[vp[i].second]=k;
    k--;
}

long long ans=0;
for(auto it: roads){
    ans += v[it[0]]+v[it[1]];
}

for(int i=0;i<n;i++)cout<<v[i]<<" ";

return ans;
    }
};