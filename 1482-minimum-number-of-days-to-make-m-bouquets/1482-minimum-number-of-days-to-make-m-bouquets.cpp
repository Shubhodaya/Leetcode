class Solution {
public:

    bool func(vector<int>& bloomDay,int day,int m, int k){
        int count=0;
        int temp=0;

        for(int i=0;i<bloomDay.size();i++){

             if(bloomDay[i]<=day){
                count++;
                 temp += (count/k);
                if(count/k==1)count=0;

                if(temp==m)return true;
            }else{
                count=0;
            }

        }
        return false;

    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int mini=bloomDay[0];
        int maxi=bloomDay[0];
        int n=bloomDay.size();
        if(m>n || k>n)return -1;
        long long int val =m*k;

        if(val>bloomDay.size())return -1;

        for(int i=0;i<bloomDay.size();i++){
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
        }
        
        long long int l= mini;
        long long int h=maxi;
        long long int ans;

        while(l<=h){
            int mid= l+(h-l)/2;

            if(func(bloomDay,mid,m,k)){
                ans =mid;
                h=mid-1;

            }else{
             l=mid +1;
            }

        }

        return ans;
    }
};