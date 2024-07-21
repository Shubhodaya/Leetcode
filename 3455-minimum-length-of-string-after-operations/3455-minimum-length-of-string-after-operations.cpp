class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        vector<int>p1(n,0),p2(n,0);


        vector<int>v1(26,0),v2(26,0);

        for( int i=0;i<n;i++){
            p1[i]=v1[s[i]-'a'];
            v1[s[i]-'a']++;
        }

        for( int i=n-1;i>=0;i--){
            p2[i]=v2[s[i]-'a'];
            v2[s[i]-'a']++;
        }

        int c=0;

        for( int i=0;i<n;i++){
            if(abs(p1[i]-p2[i])<=1)c++;
        }
        
        return c;
    }
};