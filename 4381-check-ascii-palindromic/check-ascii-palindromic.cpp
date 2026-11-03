class Solution {
public:
    bool isPalindromic(string s) {

    string binary="";
    for(char c:s){
        binary=binary+bitset<8>(c).to_string();
    }   

    int i=0;
    int j=binary.size()-1;
    while(i<j){
        if(binary[i]!=binary[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    }
};