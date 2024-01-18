//            :::::::Problem statement::::::
// You have been given stock values/prices 
// for N number of days. Every i-th day signifies 
// the price of a stock on that day. Your task is 
// to find the maximum profit which you can make by 
// buying and selling the stocks.

//  Note :
// You may make as many transactions as you want 
// but can not have more than one transaction at 
// a time i.e, if you have the stock, you need to
//  sell it first, and then only you can buy it again.

#include<bits/stdc++.h>
using namespace std;
int f(int ind,int buy,vector<int> &vec,int n,vector<vector<int>> &dp){
if(ind==n)return 0;
if(dp[ind][buy]!=-1)return dp[ind][buy];
int x=0;
// buy
if(buy){
x=max(-vec[ind]+f(ind+1,0,vec,n,dp),f(ind+1,1,vec,n,dp));
}
// sell
else {
    x=max(vec[ind]+f(ind+1,1,vec,n,dp),f(ind+1,0,vec,n,dp));
}
return x;
}

long getMaximumProfit(vector<int> &vec, int n)
{
      vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(0,1,vec,n,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<getMaximumProfit(vec,n);
    return 0;
}