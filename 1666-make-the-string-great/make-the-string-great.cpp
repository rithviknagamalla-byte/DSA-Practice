class Solution {
public:
    string makeGood(string s) {
     stack<char>st;
     string ans="";
     int c1,c2;
     for(int i=0;i<s.size();i++){
        if(!st.empty()){
            c1=st.top();
        }
        c2=s[i];
        if(!st.empty() && abs(c1-c2)==32){
            st.pop(); 
         }
        else{
            st.push(s[i]);
     
        }  

     }   
     while(!st.empty()){
        ans = ans+st.top();
        st.pop();
     }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};