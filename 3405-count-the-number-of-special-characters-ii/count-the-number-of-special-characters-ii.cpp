class Solution {
public:
    int numberOfSpecialChars(string word) {
        
    // vector<int>lower(26,-1);
    // vector<int>upper(26,-1);

    // for(int i=0;i<word.size();i++){
    //     if(word[i]>='a' && word[i]<='z'){
    //         lower[word[i]-'a']=i;
    //     }
    //     else if(word[i]>='A' && word[i]<='Z'){
    //        if(upper[word[i]-'A']==-1){
    //         upper[word[i]-'A']=i;
    //        }
    //     }
    // }
    // int count=0;
    // for(int i=0;i<26;i++){
    //  if(lower[i]!=-1 && upper[i]!=-1 && lower[i]<upper[i]){
    //     count++;
    //  }
    // }
    // return count;
    
   unordered_map<char,int>lower;
   unordered_map<char,int>upper;
   
   for(int i=0;i<word.size();i++){
    char ch=word[i];
    if(ch>='a' && ch<='z'){
        lower[ch]=i;
    }
    else if(ch>='A' && ch<='Z'){
        if(upper.find(ch)==upper.end()){
            upper[ch]=i;
        }

    }
   }
  
  int count=0;

  for(char ch='a';ch<='z';ch++){
    char chair=ch-32;
    if(lower.find(ch)!=lower.end() && upper.find(chair)!=upper.end() && lower[ch]<upper[chair]){
        count++;
    }
  }
  
  return count;

    }
};