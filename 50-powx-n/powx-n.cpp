class Solution {
public:
    double myPow(double x, long long n) {
    double half;
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    if(n<0){
       
     return myPow(1/x,-n);

    }
     half=myPow(x,n/2);
    if(n%2==0){
       half=half*half;
    }
    if(n%2!=0){
        half=x*half*half;
    }
        
       return half;
    }
};