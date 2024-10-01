class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;

        int maxarea=0;
int n = heights.size();
        for( int i=0;i<n;i++){

while(!st.empty() && heights[i]<heights[st.top()]){
int nse=i;
int h=heights[st.top()];
st.pop();
int pse= -1;
if(!st.empty())pse=st.top();
maxarea=max(maxarea,(nse-pse-1)*h);

        }
        st.push(i);
        
    }

    while(!st.empty()){
        int nse=n;
        int h= heights[st.top()];
        st.pop();
        int pse= st.empty()?-1:st.top();
        maxarea=max(maxarea,(nse-pse-1)*h);
    }

    return maxarea;
    }
};