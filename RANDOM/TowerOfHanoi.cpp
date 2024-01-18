#include<bits/stdc++.h>
using namespace std;
void solve(int n,char A,char B,char C){
    if(n==0)return;
solve(n-1,A,C,B);
cout<<A<<"->"<<C<<endl;
solve(n-1,B,A,C);
}
int main(){
    int n;
    cin>>n;
    char A='A',B='B',C='C';
    solve(n,A,B,C);
    return 0;
}