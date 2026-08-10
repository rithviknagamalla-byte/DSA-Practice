class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {

     int count=0;
     vector<int>rowcount(m,0);
     vector<int>columncount(n,0);

    for(int i=0;i<indices.size();i++){
        int r=indices[i][0];
        int c=indices[i][1];
        rowcount[r]++;
        columncount[c]++;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
       if((rowcount[i]+columncount[j])%2!=0){
        count++;
       }
        }
    }

     return count;
    }
};