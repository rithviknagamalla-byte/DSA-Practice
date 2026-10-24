class Solution {
public:
    int convertTime(string current, string correct) {
    
    int h1=stoi(current.substr(0,2));
    int m1=stoi(current.substr(3,2));

    int h2=stoi(correct.substr(0,2));
    int m2=stoi(correct.substr(3,2));


    int t1=h1*60+m1;
    int t2=h2*60+m2;

    int diff=t2-t1;
    int sol=0;
    
    int ops[]={60,15,5,1};
    for(int op:ops){
    sol=sol+diff/op;
    diff=diff%op;
    }
    return sol;
    }
};