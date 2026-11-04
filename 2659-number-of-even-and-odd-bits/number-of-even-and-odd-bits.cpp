class Solution {
public:
    vector<int> evenOddBit(int n) {
    
    int evencount=0;
    int oddcount=0;
    
    for(int i=0;i<32;i++){
        if(n&(1<<i)){
         if(i%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        }
       
    }
    return {evencount,oddcount};
    }
};