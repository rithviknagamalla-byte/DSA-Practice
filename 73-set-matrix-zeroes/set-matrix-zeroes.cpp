class Solution {
public:
    
    // void markRow(vector<vector<int>>& matrix,int row){
    //     int m = matrix.size();
    //     int n=matrix[0].size();
    //     for(int j=0;j<n;j++){
    //         if(matrix[row][j]!=0){
    //             matrix[row][j]=-1;
    //         }
    //     }
       
    // }

    
    // void markColumn(vector<vector<int>>& matrix,int column){
    //     int m = matrix.size();
    //     int n=matrix[0].size();
    //   for(int i=0;i<m;i++){
    //     if(matrix[i][column]!=0){
    //             matrix[i][column]=-1;
    //         }
    //    }
    // }

    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n=matrix[0].size();
    // for(int i=0;i<m;i++){
    //      for(int j=0;j<n;j++){
    //         if(matrix[i][j]==0){
    //          markRow(matrix,i);
    //          markColumn(matrix,j);
    //         }
    //      }
    //   }

    
    //   for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(matrix[i][j]==-1){
    //             matrix[i][j]=0;
    //         }
    //     }
    //   }
     vector<int> row(m,0);
vector<int> column(n,0);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
              row[i]=1;
              column[j]=1;
            }
        }
    }

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(row[i]==1 || column[j]==1){
            matrix[i][j]=0;
        }
    }
   }




    }
};