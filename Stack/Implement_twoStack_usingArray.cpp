#include<bits/stdc++.h>
using namespace std;
int arr[100];int n=100;int t1=-1;int t2=n;
void push1(int n1){
    if(t1+1==t2){
        cout<<"stack 1 overflow"<<endl;
    }
    t1++;
    arr[t1]=n1;

}
void push2(int n2){
    if(t2-1==t1){
        cout<<"stack 2 overflow"<<endl;
    }
    t2--;
    arr[t2]=n2;

}
int pop1(){
    if(t1==-1){
        cout<<"stack is underflow"<<endl;
    }
    int m=arr[t1];
    t1--;
    return m;
}
int pop2(){
    if(t2==n){
        cout<<"stack is underflow"<<endl;
    }
    int m=arr[t2];
    t2++;
    return m;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p;;cin>>p;
        push1(p);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int q;cin>>q;
        push2(q);
    }
    // POP elementr form stack 1;
    cout<<"Popped element is :"<<pop1()<<" "<<endl;
    cout<<"Popped element from stack 2 is :"<<pop2()<<endl;
    return 0;
}