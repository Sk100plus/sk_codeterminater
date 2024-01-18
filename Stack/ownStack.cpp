#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Stack1{
public:
int *arr;
int top;
int size;
  Stack1(int size){
this->size=size;
arr=new int[size];
top=-1;
}

void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"Stack Overflow"<<endl;
    }
}
void pop(){
if(top>=0){
top--;
    
}
else{
cout<<"Stack underflow"<<endl;
}
}
int peak(){
if(top>=0){
    return arr[top];
}
else{
    cout<<"Stack is empty"<<endl;
}
}
bool isEmpty(){
if(top==-1)
return true;
return false;
}
};
int main(){
 Stack1 st(5);
 st.push(90);
  st.push(91); st.push(92); st.push(93);
  cout<<st.peak()<<endl;
  st.pop();
  cout<<st.peak();
return 0;  
}