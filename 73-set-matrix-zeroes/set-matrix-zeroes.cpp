class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      
     int m=matrix.size();
     int n=matrix[0].size();
      vector<int>rowvector(m,0);
      vector<int>columnvector(n,0);

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
           rowvector[i]=1;
           columnvector[j]=1;
            }
        }
      }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(rowvector[i]==1 || columnvector[j]==1){
                matrix[i][j]=0;
            }
        }
     }

    }
};