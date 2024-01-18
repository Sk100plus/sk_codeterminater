#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dp){
    if(i==0&&j==0)return grid[i][j];
    if(i<0||j<0)return 1e9;
    if(dp[i][j]!=-1)return dp[i][j];
    int up=grid[i][j]+f(i-1,j,grid,dp);
    int left=grid[i][j]+f(i,j-1,grid,dp);
    return dp[i][j]=min(left,up);
}
int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return f(m-1,n-1,grid,dp);
    }
int main(){
    vector<vector<int>> vec;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int> veci(m);
        for(int j=0;j<m;j++){
cin>>veci[j];
        }
        vec.push_back(veci);
    }
    cout<<minPathSum(vec);

    return 0;
}