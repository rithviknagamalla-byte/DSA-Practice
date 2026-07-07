class Solution {
public:
    long long sumAndMultiply(int n) {
        
    long long x=0;
    long long sum=0;
    string s=to_string(n);
    long long digit;
    for(long long i=0;i<s.size();i++){
    digit=s[i]-'0';
    if(digit!=0){
      x=x*10+digit;
      sum=sum+digit;
     } 
    }
    long long result=x*sum;
    return result;
    }
};