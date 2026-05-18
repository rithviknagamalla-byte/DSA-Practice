class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   
     int length=0;
     int maxlength=0;
    
     for(int i=0;i<s.size();i++){
        vector<int>hash(256,0);
        for(int j=i;j<s.size();j++){
         if(hash[s[j]]==1){
            break;
            
         }
          hash[s[j]]=1;
          length=j-i+1;
         maxlength=max(maxlength,length);
       
        }
     }
     return maxlength;
    }
};