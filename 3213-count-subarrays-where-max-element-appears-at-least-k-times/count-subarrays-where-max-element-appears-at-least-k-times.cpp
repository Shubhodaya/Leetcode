class Solution {
public:
    long long countSubarrays(vector<int>& nums, int a) {
        int maxi=0;
        for(auto it: nums)maxi=max(maxi,it);
int n=nums.size();
        map<long long,long long >mp;

        mp[0]=1;
        long long ans=0;
        int k=0;
int j=0;
        for(auto it: nums){
            
if(it==maxi)k++;
if(mp.find(k-a)!=mp.end() && it==maxi){ans +=(n-j)*mp[k-a];}
// if(mp[k-a])cout<<mp[k-a]<<endl;
mp[k]++;

j++;
        }
        // for(auto it:mp)cout<<it.first<<" == "<<it.second<<endl;
        
        return ans;
        
    }
};