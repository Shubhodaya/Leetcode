class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;

       for(auto it: tokens){

           if(it=="+" || it=="-" ||it=="*" || it=="/"){


int a,b;
               if(it=="+"){
                    a= st.top();
                   st.pop();
                  b = st.top();
                   st.pop();
                    st.push(b+a);
               }
                              if(it=="-"){
                    a= st.top();
                   st.pop();
                  b = st.top();
                   st.pop();
                    st.push(b-a);
               }
                              if(it=="*"){
                    a= st.top();
                   st.pop();
                  b = st.top();
                   st.pop();
                    st.push(b*a);
               }
                              if(it=="/"){
                    a= st.top();
                   st.pop();
                  b = st.top();
                   st.pop();
                    st.push(b/a);
               }

           }else{
               st.push(stoi(it));
           }
       } 
       return st.top();
        
    }
};