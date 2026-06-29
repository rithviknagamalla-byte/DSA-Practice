class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
    
    int count=0;
    int i=0;
    while(i<patterns.size()){
      if(word.find(patterns[i])!=string::npos){
        count++;
      }
      i++;
    }

    return count;
    }
};