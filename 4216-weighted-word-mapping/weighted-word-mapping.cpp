class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
    char sum1;   
    string ans;
   for(string &word:words){
    long long sum=0;
    for(char ch:word){
        sum=sum+weights[ch-'a'];
    }
   sum1='z'-(sum%26);
   ans.push_back(sum1);
   }
  return ans;
    }
};