class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    
    vector<int>temp;
   unordered_map<int,int>rank;
    temp=arr;
    sort(temp.begin(),temp.end());
    int r=1;
    for(int i=0;i<temp.size();i++){
       if(rank.find(temp[i])==rank.end()){
        rank[temp[i]]=r;
        r++;
       }    
    }

    for(int i=0;i<arr.size();i++){
        arr[i]=rank[arr[i]];
    }

return arr;
    }
};