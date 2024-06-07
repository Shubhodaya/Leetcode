class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        set<string> st;
        for (string it : d)
            st.insert(it);

int n=s.size();
    
        string ans = "";
        string t = "";
        int f = 0;
        for (int i = 0; i < n; i++) {

            if (s[i] == ' '|| i==(n-1)) {
                
                 
                    t+=s[i];
                    ans += t;
                    t = "";
                    f = 0;
            
                
                continue;
            }

            if (s[i] != ' ') {
                t += s[i];
                if (st.count(t)) {
                    f = 1;
                    ans += t;
                    t = "";
                    while (i<n && s[i] != ' ')
                        i++;
                    i--;
                }
            }
        }
        return ans;
    }
};