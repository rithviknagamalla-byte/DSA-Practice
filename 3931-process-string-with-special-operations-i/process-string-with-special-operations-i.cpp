class Solution {
public:
    string processStr(string s) {
    
    string ans;
    for(char ch:s){
        if(ch>='a' && ch<='z'){
            ans.push_back(ch);
        }
        if(ch=='#'){
         ans=ans+ans;
        }

        if(ch=='%'){
            reverse(ans.begin(),ans.end());
        }
        
        if(ch=='*'){
            if(!ans.empty()){
                ans.pop_back();
        }
        }
    }
    return ans;
    }
};