#include<bits/stdc++.h>
#include<stack>
#include<algorithm>
using namespace std;
bool isValidParenthesis(string s) {
  // Write your code he
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch=s[i];
        if(ch=='['||ch=='{'||ch=='(')
        st.push(ch);
        else{
        if (!st.empty()) {
          char top = st.top();
          if ((ch == ')' && top == '(') || (ch == ']' && top == '[') ||
              (ch == '}' && top == '{')) {
            st.pop();
          } else
            return false;
        } else
          return false;
        }
    }
if(st.empty())return true;
else return false;
}
int main(){
string s; cin>>s;
if( isValidParenthesis(s))cout<<"Valid "<<endl;
else cout<<"NOT VALID"<<endl;
    return 0;
}