class Solution {
public:
    bool rotateString(string s, string goal) {
       
       int i=0;
       if(s.size()!=goal.size()){
        return false;
       }
      
       string ans=s+s;
       int found=0;
       for(int i=0;i<ans.size();i++){
        if(ans.find(goal)!=string::npos){
          return true;
        }
       }
    return false;
    }
};