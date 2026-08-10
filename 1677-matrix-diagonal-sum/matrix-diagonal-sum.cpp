class Solution {
public:
    int diagonalSum(vector<vector<int>>&mat) {
        
       int sum=0;
       int n=mat.size();
       for(int i=0;i<n;i++){
        sum=sum+mat[i][i];
        sum=sum+mat[i][n-i-1];
        if(n%2==1 && i==n/2 ){
            sum=sum-mat[i][i];
        }
       }

        return sum;
    }
};