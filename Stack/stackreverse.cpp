#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &stack,int x){
if(stack.empty()){
    stack.push(x);
    return;
}
int num=stack.top();
stack.pop();
insert(stack,x);
stack.push(num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
   if(stack.empty())return ;
   int num=stack.top();
   stack.pop();
   reverseStack(stack);
   insert(stack,num);
}
int main(){
stack<int> st;
int n;cin>>n;
for(int i=0;i<n;i++){
    st.push(i);
}
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
// cout<<endl;
reverseStack(st);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}