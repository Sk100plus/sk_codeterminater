#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
int n=s.length(),m=t.length();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));
for(int i=0;i<=n;i++)dp[0][i]=0;
for(int j=0;j<=m;j++)dp[j][0]=0;
int ans=-1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(s[i-1]==t[j-1]){
        dp[i][j]=1+dp[i-1][j-1];
        ans=max(ans,dp[i][j]);
        }
        else dp[i][j]=0;
    }
}
// int ans=-1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//        ans=max(ans,dp[i][j]);
//     }
// }
cout<<ans<<endl;
    return 0;
}