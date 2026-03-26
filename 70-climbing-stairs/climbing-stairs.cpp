class Solution {
public:
    int climbStairs(int n) {
       int n1,n2;
       if(n==1){
        return 1;
       }
       if(n==0){
       return 1;
       }
       n2=1;
       n1=2;
       int curr=0;
       for(int i=3;i<=n;i++){
       curr=n1+n2;
       n2=n1;
       n1=curr;
       }
    return n1;
    }
    
};