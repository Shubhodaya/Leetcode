class Solution {
public:
    int appendCharacters(string s, string t) {

        int n=s.size(),m=t.size();

        int i=0;
        int j=0;

        while(i<n){
           if(s[i]==t[j])j++;

           if(j==m){return 0;}
            i++;
        }

        return m-j;
        
    }
};