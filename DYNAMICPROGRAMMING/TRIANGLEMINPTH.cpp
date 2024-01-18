#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &vec,int n,int a,int b){
  if(a==n){return 0;}
 int a1=vec[a][b]+solve(vec,n,a+1,b);
 int b1=vec[a][b]+solve(vec,n,a+1,b+1);
 return min(a1,b1);
}

// Memoisation
int solve1(vector<vector<int>> &vec,int n,int a,int b,vector<vector<int>> &dp){
    if(a==n)return 0;
    if(dp[a][b]!=-1)return dp[a][b];
    int a1=vec[a][b]+solve1(vec,n,a+1,b,dp);
    int a2=vec[a][b]+solve1(vec,n,a+1,b+1,dp);
    return dp[a][b]=min(a1,a2);
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vec;
    vector<vector<int>> dp;
     
    for(int i=0;i<n;i++){
        vector<int> veci;
        for(int j=0;j<=i;j++){
veci.push_back(-1);
        }
        dp.push_back(veci);
    } 

int a=0,b=0;
cout<<solve1(vec,n,a,b,dp);

    for(int i=0;i<n;i++){
        vector<int> veci;
        for(int j=0;j<=i;j++){
int n;cin>>n;veci.push_back(n);
        }
        vec.push_back(veci);
    }
    int a=0,b=0;
    cout<<solve(vec,n,a,b);
    return 0;
}