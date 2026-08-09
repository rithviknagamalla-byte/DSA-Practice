class Solution {
public:
    int countGoodSubstrings(string s) {

     int count=0;
     int k=3;
    for(int i=0;i<s.size();i++){
     if(i+1<s.size() && i+2<s.size()){
     if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
        count++;
     }
    }
}
    return count;
    }
};