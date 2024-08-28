class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        queue<pair<string, int>>q;
        unordered_set<string>st;
        q.push({beginWord,1});
        for( auto it: wordList)st.insert(it);
        if(st.find(beginWord)!=st.end())st.erase(beginWord);

        while(!q.empty()){
            string s= q.front().first;
            int steps=q.front().second;
            q.pop();

            if(s==endWord)return steps;

            for( int i=0;i<s.size();i++){

                char org= s[i];
                for( char c='a';c<='z';c++)
                {
                    s[i]=c;
                    if( st.find(s)!=st.end()){
                        st.erase(s);
                        q.push({s,steps+1});
                    }
                }
                s[i]=org;
            }

        }
        return 0;
    }
};