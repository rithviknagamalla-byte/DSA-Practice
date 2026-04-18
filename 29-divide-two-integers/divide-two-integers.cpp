class Solution {
public:
    int divide(long long dividend, long long divisor) {
        int result=dividend/divisor;
       if (dividend == INT_MIN && divisor == -1){
        return INT_MAX;
       }
        return result;
    }
};