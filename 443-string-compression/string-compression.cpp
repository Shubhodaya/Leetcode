class Solution {
public:
    int compress(vector<char>& chars) {
        string t="";
        int k=1;
        int n=chars.size();
        if(n==1)return 1;

        for(int i=1;i<chars.size();i++){
       if(chars[i]==chars[i-1])k++;
       else{
        t +=chars[i-1];
        if(k>1) t+= to_string(k);
        k=1;
       }

       if(i==n-1){
        if(chars[i]==chars[i-1]){
         t +=chars[i-1];
        if(k>1) t+= to_string(k);
        }else{
            t +=chars[i];
        }
       }

        } 


        vector<char>v;
        for(int i=0;i<t.size();i++){
            v.push_back(t[i]);
        }
        chars=v;

        return t.size();
    }
};