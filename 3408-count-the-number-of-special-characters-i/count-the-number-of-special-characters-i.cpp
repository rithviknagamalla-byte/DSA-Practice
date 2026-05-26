class Solution {
public:
    int numberOfSpecialChars(string word) {

      set<char>lower;
      set<char>upper;

      for(char ch:word){
        if(ch>='a' && ch<='z'){
       lower.insert(ch);
        }
        else if(ch>='A' && ch<='Z'){
         upper.insert(ch);
        }
      }
       int count=0;
       for(char ch:lower){
        if(upper.count(ch-32)){
            count++;
        }
       }

     return count;
    }
};