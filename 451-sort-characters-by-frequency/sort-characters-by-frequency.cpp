class Solution {
public:
    string frequencySort(string s) {
        
      unordered_map<char,int>mp;
      vector<pair<int,char>>ans;
      for(char ch:s){
        mp[ch]++;
      }
      for(auto it:mp){
        ans.push_back({it.second,it.first});
      }
   sort(ans.rbegin(),ans.rend());
    
    string f="";
    for(auto it:ans){
        f.append(it.first,it.second);
    }
    return f;
    }
};