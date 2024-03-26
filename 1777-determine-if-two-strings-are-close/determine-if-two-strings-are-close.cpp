class Solution {
public:

    bool closeStrings(string word1, string word2) {

        if(word1.size()!=word2.size())return false;
        int n=word1.size();
        map<char,int>mp1,mp2;
        for(int i=0;i<n;i++)mp1[word1[i]]++;
        for(int i=0;i<n;i++)mp2[word2[i]]++;

        for(int i=0;i<n;i++){
            char c1= word1[i];
            char c2= word2[i];

            if(mp2.find(c1)==mp2.end())return false;
            if(mp1.find(c2)==mp1.end())return false;

        }

        if(mp1.size()!=mp2.size())return false;

        vector<int>a,b;

        for(auto it:mp1)a.push_back(it.second);
         for(auto it:mp2)b.push_back(it.second);
         sort(a.begin(),a.end());
         sort(b.begin(),b.end());

return a==b;


        
    }
};