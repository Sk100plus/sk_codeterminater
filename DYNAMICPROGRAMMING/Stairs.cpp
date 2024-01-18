#include<bits/stdc++.h>
using namespace std;
int main(){
// if only one and two step is allowed to jump
int n;
cin>>n;
int dp[n+1];
dp[0]=1;
dp[1]=1;
for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
}
// Time comp O(n) and SC O(n)
cout<<dp[n]<<endl;
// Space optimization case!!!
int p1=1,p2=1;
for(int i=2;i<=n;i++){
    int curr=p1+p2;
    p1=p2;
    p2=curr;
}
if(n==0)cout<<p1;
else
cout<<p2<<endl;
return 0;
}