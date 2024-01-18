#include<bits/stdc++.h>
using namespace std;
int answer(string s){
    stack<int> st;
    st.push(-1);
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')st.push(i);
        else{
            st.pop();
            if(st.empty())st.push(i);
            else count=max(count,i-st.top());
        }
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    cout<<answer(s);
    return 0;
}