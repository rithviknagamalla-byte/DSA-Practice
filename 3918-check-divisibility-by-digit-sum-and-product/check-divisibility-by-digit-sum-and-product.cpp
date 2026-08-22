class Solution {
public:
    bool checkDivisibility(int n) {

    int sum=0;
    int m=n;
    int product=1;
    int digit=0;
    while(n>0){
    digit=n%10;
    
    sum=sum+digit;
    product=product*digit;

    n=n/10;
    }
    
   if(m%(sum+product)==0){
    return true;
   }
   return false;
    }
};