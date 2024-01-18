#include<bits/stdc++.h>
using namespace std;
// ***********Recursion method************
int UniquePath(int n ,int m){
if(n==0&&m==0)return 1;
if(n<0||m<0)return 0;
int up=UniquePath(n-1,m);
int left=UniquePath(n,m-1);
return up+left;
}
// *************Memoisation***********
int DpUniquePath(vector<vector<int>> dp,int n,int m){
    if(n==0&&m==0)return 1;
    if(n<0||m<0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    int up=DpUniquePath(dp,n-1,m);
    int left=DpUniquePath(dp,n,m-1);
    return dp[n][m]=up+left;

}
int main(){
    int n,m;
    cin>>n>>m;
  cout<<UniquePath(n-1,m-1)<<endl;
  vector<vector<int>> dp(n,vector<int>(m,-1));
  cout<<DpUniquePath(dp,n-1,m-1)<<endl;

//   ********space optimization case***********
vector<vector<int>> Dp(n,vector<int>(m,0));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0&&j==0)Dp[i][j]=1;
        else{
            int up=0,left=0;
            if(i>0) up=Dp[i-1][j];
            if(j>0)left=Dp[i][j-1];
            Dp[i][j]=up+left;
        }
    }
}
cout<<Dp[n-1][m-1]<<endl;
    return 0;
}