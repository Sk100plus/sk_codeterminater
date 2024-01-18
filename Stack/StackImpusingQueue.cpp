#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
int size;
queue<int> q1;
queue<int> q2;
Stack(){
    size=0;
}
void push(int data){
    q2.push(data);
    size++;
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    // reverse all element of q1
    queue<int> temp=q1;
q1=q2;
q2=temp;
}
void pop(){
    q1.pop();
    size--;
}
int top(){
    return q1.front();
}
int sizeQ(){
    return size;
}
};
int main(){
Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<<st.top();
cout<<st.size;
st.pop();
cout<<st.top();
    return 0;
}