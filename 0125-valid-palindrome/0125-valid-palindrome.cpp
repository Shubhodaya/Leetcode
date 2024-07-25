class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);

// cout<<s<<endl;
        for(int i=0;i<s.length();i++){
            // cout<<i<<endl;
            // if(s[i]==' ')continue;
            // cout<<tolower(s[i])<<endl;
            if(((s[i]-'a')>=0 && ((s[i])-('a'))<=25) || ((s[i]-'0')>=0 && (s[i]-'0')<=9))
            s1 += s[i];
        }
        string s2=s1;
        cout<<s1;
        reverse(s2.begin(),s2.end());

        if(s1==s2)return 1;
        return 0;

        
    }
};