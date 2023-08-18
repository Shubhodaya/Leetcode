class Solution {
public:
    bool possible(vector<int>& weights,int x, int days){
int day =1 , load =0;

        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>x){
                day += 1;
                load=weights[i];
            }else
            load += weights[i];
        }

        if(day<=days)return true;
        return false;


    }
    int shipWithinDays(vector<int>& weights, int days) {

int s=0;
int maxi =weights[0];
        for(auto wt :weights){
            maxi = max(maxi,wt);
            s += wt;
        }

        int l=maxi;
        int h=s;
        int ans;

        while(l<=h){

            int mid= l+(h-l)/2;

            if(possible(weights,mid,days)){
                h=mid-1;
                ans= mid;
            }else{
                l=mid +1;
            }
        }

        return ans;
        
    }
};