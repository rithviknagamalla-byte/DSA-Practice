class Solution {
public:
    int romanToInt(string s) {
    
    int sum=0;
    unordered_map<char,int>mp;

    for(char ch:s){
        if(ch=='I'){
            mp[ch]=1;
        }
        if(ch=='V'){
            mp[ch]=5;
        }
        if(ch=='X'){
            mp[ch]=10;
        }
        if(ch=='L'){
            mp[ch]=50;
        }
        if(ch=='C'){
            mp[ch]=100;
        }
        if(ch=='D'){
            mp[ch]=500;
        }
         if(ch=='M'){
            mp[ch]=1000;
        }
    }

   for(int i=0;i<s.size();i++){
    if(mp[s[i]]<mp[s[i+1]]){
        sum=sum-mp[s[i]];
    }
    else{
       sum=sum+mp[s[i]];
    } 
   }
return sum;
    }
};