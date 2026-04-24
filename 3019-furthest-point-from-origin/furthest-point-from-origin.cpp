class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
      int RightCount=0,LeftCount=0,BracketCount=0;
      for(int i=0;i<moves.size();i++){
        if(moves[i]=='L'){
        LeftCount++;
        }
        if(moves[i]=='R'){
        RightCount++;
        }
        if(moves[i]=='_'){
        BracketCount++; 
        }
      }
      int count=RightCount-LeftCount;
      int ans;

      ans=abs(count)+BracketCount;
   
       return ans;
    }
};