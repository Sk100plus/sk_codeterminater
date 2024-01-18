#include<bits/stdc++.h>
using namespace std;
int solve(int m,int n){
    if(n==0||m==0)return 1;
    return solve(m-1,n)+solve(m,n-1);
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<solve(m-1,n-1);
    return 0;
}