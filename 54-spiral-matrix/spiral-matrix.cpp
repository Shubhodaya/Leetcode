class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>v;

        int rows=matrix.size();
        int cols= matrix[0].size();

        int row=0;
        int col=-1;
        int d=1;

        while(rows>0 && cols>0){

            for(int i=0;i<cols;i++){
                col+=d;
                v.push_back(matrix[row][col]);
            }
            rows--;

            for (int i = 0; i < rows; i++) {
                row += d;
                v.push_back(matrix[row][col]);
            }
            cols--;
d*=-1;

        }
        return v;
        
    }
};