// You are given an array prices where prices[i] 
// is the price of a given stock on the ith day.

// Find the maximum profit you can achieve. 
// You may complete at most two transactions.

// Note: You may not engage in multiple transactions 
// simultaneously (i.e., you must sell the stock before you buy again)



// Input: prices = [3,3,5,0,0,3,1,4]
// Output: 6
// Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
// Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.

#include<bits/stdc++.h>
using namespace std;

// ************Memoisation************
// with the help of 2_D dp
int f(int ind,int buy,vector<int>& price,int n,int cap){

if(ind==n||cap==0)return 0;
// if(dp[ind][buy]!=-1)return dp[ind][buy];
int profit=0;
// buy
if(buy){
profit=max(-price[ind]+f(ind+1,0,price,n,cap),f(ind+1,1,price,n,cap));
}
// sell
else {
    profit=max(price[ind]+f(ind+1,1,price,n,cap-1),f(ind+1,0,price,n,cap));
}
return  profit;
}
int maxProfit(vector<int>& prices)
{
        int n=prices.size();
        int cap=2;
    //   vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(0,1,prices,n,
        cap);
}

// *********MEMOISATION WITH 3-D DP*************
long f1(int ind,int buy,vector<int>& price,int n,vector<vector<vector<int>>> &dp,int cap){

if(ind==n||cap==0)return 0;
if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
long profit=0;
// buy
if(buy&&cap>0){
profit=max(-price[ind]+f1(ind+1,0,price,n,dp,cap),f1(ind+1,1,price,n,dp,cap));
}
// sell
else {
    profit=max(price[ind]+f1(ind+1,1,price,n,dp,cap-1),f1(ind+1,0,price,n,dp,cap));
}
return dp[ind][buy][cap]= profit;
}
int Memo3Dp(vector<int> &prices){
    int buy=1,cap=2;
    int n=prices.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
return f1(0,1,prices,n,dp,cap);
}


// **********TABULATION***********
int tabu(vector<int>& prices){
    int n=prices.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));

    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<2;buy++){
            for(int cap=1;cap<=2;cap++){
                if(buy==1){
                    dp[ind][buy][cap]=max(-prices[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);
                }
                else{
                    dp[ind][buy][cap]=max(prices[ind]+dp[ind+1][1][cap-1],dp[ind+1][0][cap]);
                }
            }
        }
    }
    return dp[0][1][2];
}

int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++)cin>>prices[i];
    cout<<tabu(prices);
    return 0;
}
