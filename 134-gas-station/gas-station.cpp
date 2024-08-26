class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int c=0,g=0;
        for(auto it:gas)g+=it;
        for(auto it:cost)c+=it;

        if(c>g)return -1;

        int si=0;
int cg=0;
        for( int i=0;i<gas.size();i++){
cg+=gas[i]-cost[i];
if(cg<0){
    si=i+1;
    cg=0;
}

        }
        return si;
    }
};