class Solution {
public:
    string losingPlayer(int x, int y) {
        int a=0;

        while(1){
            if(x>=1 && y>=4){
                x-=1;y-=4;
            }else break;
            if(a==0)a=1;
            else a=0;
        }
        if(a)return "Alice";
        return "Bob";
        
    }
};