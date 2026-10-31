class Solution {
public:
    int hammingWeight(int n) {
        // int count=0;
        // while(n>0){
        //     n=n&(n-1);
        //     count++;
        // }
        // return count;


        int count=0;
        while(n){
           if(n&1){
            count=count+1;
           }
            n=n>>1;
        }
        return count;
    } 
};