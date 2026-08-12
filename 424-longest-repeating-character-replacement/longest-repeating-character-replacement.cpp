class Solution {
public:
    int characterReplacement(string s, int k) {

    int count[26]={0};
    int left=0;
    int maxlength=0;
    int maxFreq=0;
    for(int i=0;i<s.size();i++){
       count[s[i]-'A']++;
       maxFreq = max(maxFreq, count[s[i] - 'A']);

       while((i-left+1)-maxFreq>k){
       count[s[left]-'A']--;
       left++;
       }
       maxlength=max(maxlength,i-left+1);
    }
    return maxlength;
    }
};