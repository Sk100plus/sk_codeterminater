     //       ******DEQUEUE PROCESS******
//    IF BOTH STACKS ARE EMPTY THEN PRINT ERROR
// IF STACK2 IS EMPTY WHILE STACK1 IS NOT EMPTY PUSH EVERY ELEMENT FROM STACK1 TO STACK2
// POP THE ELEMENT FROM STACK2 AND RETUN IT;

#include<iostream>
#include<stack>
using namespace std;
class Queue{
public:
int size;
stack<int> s1;
stack<int> s2;
void pushEle(int data){
s1.push(data);
}
int pop(){
   if(s1.empty()&&s2.empty()){
    cout<<"Queue is empty\n";
    return -1;
   }
   if(s2.empty()){
    while(!s1.empty()){
        s2.push(s1.top());s1.pop();
    }
   }
int topval=s2.top();
s2.pop();
return topval;
}
//     int pop(){
//     if(s1.empty()){
//         cout<<"Queue is empty";
//         return 1;
//     }
//     int x=s1.top();
//     s1.pop();
//     if(s1.empty())return x;
//     int item=pop();
//     s1.push(x);
//     return item;
//  }


bool empty(){
    if(s1.empty()&&s2.empty()){
        return true;
    }
    return false;
}
};
int main(){
Queue q;
q.pushEle(1);
q.pushEle(2);
cout<<q.pop();
q.pushEle(3);
q.pushEle(3);
cout<<q.pop();
// cout<<q.pop();

// cout<<q.pop();
// cout<<q.pop();
    return 0;
}

// POP() FUNCTION ONLY GOT CHANGED
// RECURSIVELY POP EVERYTHING FROM STACK1 ,STORE THE POPPED ELEMENT
// ITEM IN A VARIABLE RES ,PUSH RES BACK TO STACK1 AND RETURN RES;
 
//  int pop(){
//     if(s1.empty()){
//         cout<<"Queue is empty";
//         return 1;
//     }
//     int x=s1.top();
//     s1.pop();
//     if(s1.empty())return x;
//     int item=pop();
//     s1.push(x);
//     return item;
//  }
