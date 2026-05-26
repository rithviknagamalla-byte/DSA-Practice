class Solution {
public:
    int numberOfSpecialChars(string word) {

    //   set<char>lower;
    //   set<char>upper;

    //   for(char ch:word){
    //     if(ch>='a' && ch<='z'){
    //    lower.insert(ch);
    //     }
    //     else if(ch>='A' && ch<='Z'){
    //      upper.insert(ch);
    //     }
    //   }
    //    int count=0;
    //    for(char ch:lower){
    //     if(upper.count(ch-32)){
    //         count++;
    //     }
    //    }

    //  return count;

     vector<int>lower(26,0);
     vector<int>upper(26,0);

     for(char ch:word){
        if(ch>='a'&& ch<='z'){
            lower[ch-'a']=1;
        }
        else if(ch>='A'&& ch<='Z'){
            upper[ch-'A']=1; 
        }
     }
     int count=0;
    for(int i=0;i<26;i++){
        if(lower[i]&&upper[i]==1){
            count++;
        }
    }
     return count;
    }
};