class Solution {
public:
    bool judgeCircle(string moves) {
        
        int verticalmovement =0 ,horizontalmovement=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                verticalmovement=verticalmovement+1;
            }
            if(moves[i]=='D'){
                verticalmovement=verticalmovement-1;
            }
            if(moves[i]=='R'){
                horizontalmovement=horizontalmovement+1;
            }
            if(moves[i]=='L'){
                horizontalmovement=horizontalmovement-1;
            }
        }
        if(verticalmovement==0 &&  horizontalmovement==0 ){
            return true;
        }
        return false;
    }
};