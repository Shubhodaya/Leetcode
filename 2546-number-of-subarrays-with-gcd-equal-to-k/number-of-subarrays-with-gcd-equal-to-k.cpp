class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
              map<long,long>prev;
        map<long,long>mp;

        for( long i=nums.size()-1;i>=0;i--){
           map<long,long>newc;
           for(auto it:prev){
            newc[__gcd((int)nums[i],(int)it.first)]=max(newc[__gcd((int)nums[i],(int)it.first)],it.second);
           }
              newc[nums[i]]=max(newc[nums[i]],i);

               prev=newc;
vector<pair<long,long>>v(newc.begin(),newc.end());
reverse(v.begin(),v.end());


for( long long j=0;j<v.size();j++){
    if(j==0){
        mp[v[j].first]+=(v[j].second-i+1);
    }else{
        mp[v[j].first]+=(v[j].second-v[j-1].second);
    }
}
          

        }

        return mp[k];
        
        
    }
};