class Solution {
public:
    int maxOperations(string s) {

        vector<int>v;
        int n= s.size();

        for( int i=0;i<n;i++){
            if(s[i]=='1')v.push_back(1);
            else{
                while(i<n && s[i]=='0')i++;
                if(i==n){
                    v.push_back(0);
                    break;
                }
                if(i<n && s[i]=='1'){
                    v.push_back(0);
                    v.push_back(1);
                }
            }
        }


        int c=0;
        int ans=0;

        for( int i=v.size()-1;i>=0;i--){
            if(v[i]==0)c++;
            else{
                ans+=c;
            }
        }

        return ans;
        
    }
};