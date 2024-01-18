// *******************STEPS TO FOLLOW*****************
// 1. If operand print ;
// 2. If '(' :push to stack;
// 3.If ')': pop from stack and print untill ')' is found;
// 4. If operator :pop form stack and print untill an operator withless precedence is found;
#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c=='^')return 3;
    else if(c=='*'||c=='/')return 2;
    else if(c=='+'||c=='-')return 1;
    else return -1;
}
void solve(string s){
stack<char> st; 
string res;
for(int i=0;i<s.length();i++){
    if((s[i]>=48&&s[i]<=57))
    res+=s[i];
    else if(s[i]=='(')
    st.push(s[i]);
    else if(s[i]==')'){
        while(!st.empty()&&st.top()!='('){
            res+=st.top();
            st.pop();
        }
        if(!st.empty()){
            st.pop();
        }
    }
    else{
        while(!st.empty()&&prec(st.top())>prec(s[i])){
            res+=st.top();
            st.pop();
        }

        st.push(s[i]);
    }
  
}
while(!st.empty()){
    res+=st.top();
    st.pop();
}
cout<<res<<endl;
// stack<char> ans;
//  for(int i=0;i<res.length();i++){
//     if(res[i]=='1'||res[i]=='2'||s[i]=='3'){
//         ans.push(res[i]);
//     }
//     else if(res[i]=='+'){
//         int val1=(int)ans.top();ans.pop();
//         int val2=(int)ans.top();ans.pop();
//         int sol=val1+val2;
//         char ch=(char)sol;
//         // cout<<sol;
//         ans.push(sol);
//     }
//     else if(res[i]=='*'){
//         int val1=(int)ans.top();ans.pop();
//         int val2=(int)ans.top();ans.pop();
//         int sol=val1*val2;
//          char ch=(char)sol;
//         // cout<<sol<<endl;
//         ans.push(sol);
//     }
//  }
//  cout<<ans.top();

}

int main(){
    string s;
    cin>>s;
 solve(s);
    return 0;
}