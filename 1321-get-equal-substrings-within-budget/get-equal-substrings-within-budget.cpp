class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {

int n=s.size();
        vector<int>v(n);

        for(int i=0;i<n;i++){v[i]=abs(s[i]-t[i]);}

        int t1=0, ans=0;

        int i=0,j=0;

        while( j<n){
            t1 += v[j];
       
            while(t1>maxCost && i<=j){

                t1-=v[i];
                i++;

            }
                if(t1<=maxCost)ans = max(ans,j-i+1);
j++;

        

        }
        return ans;
        
    }
};