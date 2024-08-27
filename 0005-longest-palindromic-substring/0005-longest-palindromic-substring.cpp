class Solution {
    string f(int i, int j,string s ){
int n= s.size();
    while(i>=0 && j<n && s[i]==s[j]){
        i--;
        j++;
    }

    return s.substr(i+1,j-1-i);


    }
public:
    string longestPalindrome(string s) {
    
    string t="";
    t+=s[0];
    cout<<t<<endl;
    int n= s.size();
    // vector<vector<int>>dp(s.size()+1, vector<int>(s.size()+1,-1));

    for( int i=0; i<s.size();i++){
          
          string odd= f( i,i,s);
          string eve="";
          if(i+1<n)eve= f(i,i+1,s);

          if(odd.size()>t.size())t=odd;
          if(eve.size()>t.size())t=eve;

    }


    return t;
    }
};