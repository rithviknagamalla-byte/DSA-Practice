class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
      //bruteforce
    int count=0;
    for(int i=0;i<words1.size();i++){
        int freqcount1=0;
        int freqcount2=0;
        for(int j=0;j<words1.size();j++){
        if(words1[i]==words1[j]){
        freqcount1++;
        }
        }
        for(int k=0;k<words2.size();k++){
            if(words1[i]==words2[k]){
            freqcount2++;
            }
        }
        if(freqcount1==1 && freqcount2==1){
           count++;
        }
    }
    return count;

    //    unordered_map<string,int>map1;
    //    unordered_map<string,int>map2;
    //    for(string i:words1){
    //     map1[i]++;
    //    }
    //    for(string i:words2){
    //     map2[i]++;
    //    }
    //    int count=0;
    //    for(auto it:map1){
    //     if(it.second==1 && map2[it.first]==1){
    //         count++;
    //     }
    //    }
    //    return count;
    }
};