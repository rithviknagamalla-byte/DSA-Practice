class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>st;
    int ans;
    for(int i=0;i<tokens.size();i++){
        if(tokens[i]!="+"&& tokens[i]!="/" && tokens[i]!="*" && tokens[i]!="-"){
            st.push(stoi(tokens[i]));
        }
        else{
            if(st.size()>=2){
               int ans1= st.top();
               st.pop();
               int ans2= st.top();
               st.pop();
               if(tokens[i]=="+"){
                ans= ans2+ans1;
               }
               if(tokens[i]=="-"){
                ans= ans2-ans1;
               }
               if(tokens[i]=="*"){
                ans= ans2*ans1;
               }
               if(tokens[i]=="/"){
                ans= ans2/ans1;
               }
              
              st.push(ans);
            }
        }
    }
    return st.top();
    }
};