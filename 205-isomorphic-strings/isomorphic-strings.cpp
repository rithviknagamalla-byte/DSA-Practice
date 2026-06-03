class Solution {
public:
    bool isIsomorphic(string s, string t) {
     
     unordered_map<char,char>map1;
     unordered_map<char,char>map2;
     if(s.size()!=t.size()){
        return false;
     }

     for(int i=0;i<s.size();i++){
        char c1=s[i];
        char c2=t[i];
        if(map1.find(c1)!=map1.end()){
            if(map1[c1]!=c2){
                return false;
            }
        }
        else{
            map1[c1]=c2;
            }
        if(map2.find(c2)!=map2.end()){
            if(map2[c2]!=c1){
                return false;
            }
       }
       else{
            map2[c2]=c1;
         }     
    }
     return true;
    }
};