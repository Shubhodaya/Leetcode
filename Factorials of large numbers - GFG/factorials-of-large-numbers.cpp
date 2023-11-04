//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
    private:
    
    
    int func(vector<int> &ans, int size,int num){
        int c=0;
        
        for(int i=size-1;i>=0;i--){
            int prod= num*ans[i] + c;
            ans[i]=prod%10;
            c=prod/10;
        }
        
        while(c){
            ans.insert(ans.begin(),c%10);
            c=c/10;
            size++;
        }
        return size;
        
        
    }
    
public:
    vector<int> factorial(int N){
        // code here
        
        // int ans[5000];
        vector<int>ans;
        
        ans.push_back(1);
        
        if(N==1)return ans;
        int size=1;
        
        for(int i=2;i<=N;i++){
            
            size=func(ans,size,i);
        }
        
        
        return ans;
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends