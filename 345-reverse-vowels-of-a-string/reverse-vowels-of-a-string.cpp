class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int l=0,r=n-1;
        auto f = [&](char a){
            a = (char)tolower(a);
            if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')return 1;
            return 0;
        };

        while(l<r){
            if(!f(s[l]))l++;
            if(!f(s[r]))r--;

            if(f(s[l])&& f(s[r])){
                swap(s[l],s[r]);
                l++;r--;
            }



        }return s;        
    }
};