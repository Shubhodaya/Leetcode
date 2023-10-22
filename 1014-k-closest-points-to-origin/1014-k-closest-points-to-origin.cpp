class Solution {
public:
static bool cmp(vector<int> &a,vector<int> &b){
    int x=a[0]*a[0] + a[1]*a[1];
    int y= b[0]*b[0] + b[1]*b[1];
    if(x<y)return true;
    return false;

}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        sort(points.begin(),points.end(),cmp);

        for(int i=0;i<k;i++){
            ans.push_back(points[i]);
        }
return ans;
        
    }
};