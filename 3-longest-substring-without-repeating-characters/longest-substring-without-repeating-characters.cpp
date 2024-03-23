class Solution {
public:
    int lengthOfLongestSubstring(string s) {
int n=s.size();
if(!n)return 0;
int l=0;
set<int>st;
int ans=0;
for(int r=0;r<n;r++){

while(st.find(s[r])!=st.end()){
st.erase(s[l]);l++;
}
st.insert(s[r]);
ans=max(ans,(int)st.size());

}return ans;

    }
};