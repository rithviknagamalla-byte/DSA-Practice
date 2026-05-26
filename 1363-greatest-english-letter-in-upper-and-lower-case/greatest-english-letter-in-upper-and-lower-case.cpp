class Solution {
public:
    string greatestLetter(string s) {
        
    set<char>lower;
    set<char>upper;
   
   for(char ch:s){
    if(ch>='a' && ch<='z'){
        lower.insert(ch);
    }
    else if(ch>='A' && ch<='Z'){
        upper.insert(ch);
    }
   }
    
    
    for(char ch='Z';ch>='A';ch--){
        if(upper.count(ch) && lower.count(ch+32)){
            return string(1,ch);
        }
    }
   return {};
    }
};