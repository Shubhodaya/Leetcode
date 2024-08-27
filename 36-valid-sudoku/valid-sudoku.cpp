class Solution {
public:

bool val(int ir, int ic,vector<vector<char>>& b){
    // int n= board.size();
    // int m=board[0].size();

    int fr= (ir/3)*3;
    int lr=fr+3;
    int fc=(ic/3)*3;
    int lc= fc+3;
    
    set<char>st;int c=0;
    for(int i=0;i<9;i++){
        if(b[ir][i]!='.'){st.insert(b[ir][i]);c++;}
    }

    if(st.size()<c){cout<<"1";return false;}
    st.clear();c=0;

        for(int i=0;i<9;i++){
        if(b[i][ic]!='.'){st.insert(b[i][ic]);c++;}
    }

    if(st.size()<c){cout<<"2";return false;}
    st.clear();c=0;

// cout<<fr<<endl;
// cout<<lr<<endl;
// cout<<fc<<endl;
// cout<<lc<<endl;
    for( int i=fr;i<lr;i++){
        for( int j=fc;j<lc;j++){
             if(b[i][j]!='.'){st.insert(b[i][j]);c++;}
        }
    }
if(st.size()<c){cout<<"3";return false;}

return true;

}
    bool isValidSudoku(vector<vector<char>>& b) {

        for( int i=0;i<9;i++){
            for( int j=0;j<9;j++){
                if( b[i][j]!='.'){
                    if(!val(i,j,b)){cout<<i<<" "<<j;return false;}
                }
            }
        }

        return true;
        
    }
};