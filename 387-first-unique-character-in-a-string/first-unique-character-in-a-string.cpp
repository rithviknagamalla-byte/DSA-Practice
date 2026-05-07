class Solution {
public:
    int firstUniqChar(string s) {
    //     unordered_map<char,int>m;
    //     queue<int> q;
    // for(int i=0;i<s.size();i++){
        
    //       m[s[i]]++;
    //       q.push(i);
    //     while(!q.empty() && m[s[q.front()]]>1){
    //         q.pop();
    //     }
    // }
    // if(q.empty()){
    //     return -1;
    // }
    // else{
    //     return q.front();
    // }
    unordered_map<char,int>m;
    for(char num:s){
        m[num]++;
    }
    for(int i=0;i<s.size();i++){
        if(m[s[i]]==1){
            return i;
        }
    }
    return -1;

    int freq[26]={0};
    
    for(char ch:s){
      freq[ch-'a']++;
    }
   for(int i=0;i<s.size();i++){
    if(freq[s[i]]==1){
        return i;
    }
   }
   return -1;
    }
};
