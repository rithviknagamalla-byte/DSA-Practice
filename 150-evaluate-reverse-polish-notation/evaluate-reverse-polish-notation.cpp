class Solution {
public:
    int evalRPN(vector<string>& tokens) {

       stack<int>st;
       int ans=0;
       int a,b;
       for(int i=0;i<tokens.size();i++){
        if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){
            st.push(stoi(tokens[i]));
        }
        else{
            if(st.size()>=2){
             a=st.top();
             st.pop();
             b=st.top();
             st.pop();   
            }
            if(tokens[i]=="+"){
                ans=b+a;
            }
            else if(tokens[i]=="-"){
                ans=b-a;
            }
            else if(tokens[i]=="/"){
                ans=b/a;
            }
            else{
                ans=b*a;
            }
            st.push(ans);
        }
        
       }
       return st.top();
    }
};