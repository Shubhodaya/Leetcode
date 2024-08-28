class Solution {
    private: 
    int total;vector<int> csum;
public:
    Solution(vector<int>& w) {
        int c=0;
        for( auto it: w){
            c+=it;
            csum.push_back(c);
        }
        total=c;
    }
    
    int pickIndex() {

        int t= rand()%total+1;
        int l=0,h=csum.size();

        while(l<h){
            int mid= (l+h)/2;
            if(t>csum[mid]){
                l=mid+1;
            }else {
                h=mid;
            }
        }
        return l;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */