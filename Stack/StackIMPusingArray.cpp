#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack is overflow now Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
int pop() {
   if(top<=-1){
   cout<<"Stack is underflow now"<<endl;
   return -1;
   }
   else {
     return stack[top];
      top--;
   }
}
int main() {
   int ch, n;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>ch;
    push(ch);
   }
   cout<<"popped element is:"<<pop()<<" ";
   return 0;
}