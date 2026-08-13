class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
    int n=code.size();
    vector<int>ans(code.size());
    for(int i=0;i<code.size();i++){
        if(k==0){
        ans[i]=0;
        }
        else if(k>0){
            for(int j=1;j<=k;j++){
        ans[i]=ans[i]+code[(i+j)%code.size()];
        }
        }
        else{
        for(int j=1;j<=-k;j++){
        ans[i]=ans[i]+code[(i-j+n)%n];
        }
        }
    }
    
    return ans; 
    }
};