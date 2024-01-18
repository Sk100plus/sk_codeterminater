// You are given an integer array prices where
//  prices[i] is the price of a given stock on the ith day,
//   and an integer k.

// Find the maximum profit you can achieve. 
// You may complete at most k transactions: i.e. 
// you may buy at most k times and sell at most k times.

// Note: You may not engage in multiple transactions simultaneously
//  (i.e., you must sell the stock before you buy again).


// Input: k = 2, prices = [3,2,6,5,0,3]
// Output: 7
// Explanation: Buy on day 2 (price = 2) and sell
//  on day 3 (price = 6), profit = 6-2 = 4. 
//  Then buy on day 5 (price = 0) and sell on day 6
//   (price = 3), profit = 3-0 = 3.

#include<bits/stdc++.h>
using namespace std;
// ***********MEMOISATION***********
int f(int ind,int buy,int n,vector<int>&price,vector<vector<vector<int>>> &dp,int cap){
    if(ind ==n||cap==0)return 0;
    if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
   int profit=0;
    if(buy){
       profit=max(-price[ind]+f(ind+1,0,n,price,dp,cap),f(ind+1,1,n,price,dp,cap)); 
    }
    else{
        profit=max(price[ind]+f(ind+1,1,n,price,dp,cap-1),f(ind+1,0,n,price,dp,cap));
    }
}
int Memo(vector<int> &price,int k){
    int cap=k;
    int buy=1;
    int n=price.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
    return f(0,buy,price.size(),price,dp,cap);
}
// ***************TABULATION**************
int tabu(vector<int> &price,int k){
    int cap=k;
    int buy=1;
    int n=price.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
    for(int ind=n-1;ind>=0;ind--){
        for(int buy=0;buy<=1;buy++){
            for(int cap=1;cap<=k;cap++){
                if(buy){
                    dp[ind][buy][cap]=max(-price[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);
                }
                else{
                    dp[ind][buy][cap]=max(price[ind]+dp[ind+1][1][cap-1],dp[ind+1][0][cap]);
                }
            }
        }
    }
    return dp[0][1][k];
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<tabu(vec,k);
    return 0;
}