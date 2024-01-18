// You are given ‘n’ items with certain ‘profit’
//  and ‘weight’ and a knapsack with weight capacity ‘w’.

// You need to fill the knapsack with the items in such a 
// way that you get the maximum profit. You are allowed to 
// take one item multiple times.

// Example:
// Input: 
// 'n' = 3, 'w' = 10, 
// 'profit' = [5, 11, 13]
// 'weight' = [2, 4, 6]

// Output: 27

#include<bits/stdc++.h>
using namespace std;
// *************RECURSIVE METHOD*************
int f(vector<pair<int,int>> &vec,int wt,int ind,int n){
    if(ind==n-1){
        pair<int,int> pr=vec[n-1];
        if(wt>=pr.first)
        return wt/pr.first*pr.second;
        return 0;
    }
    int take=INT_MIN;
    pair<int,int> pr=vec[ind];
    if(wt>=pr.first)take=pr.second+f(vec,wt-pr.first,ind,n);
    int nottake=f(vec,wt,ind+1,n);
     return max(take,nottake);
}
int Rec(int n,int wt,vector<int> &profit,vector<int>& weight){
      vector<pair<int,int>> vec;
      for(int i=0;i<n;i++){
          vec.push_back(make_pair(weight[i],profit[i]));
      }
      sort(vec.begin(),vec.end());
      return f(vec,wt,0,n);
}

// **********MEMOISATION****************
int fi(vector<pair<int,int>> &vec,int wt,int ind,int n,vector<vector<int>> &dp){
    if(ind==n-1){
        pair<int,int> pr=vec[n-1];
        if(wt>=pr.first)
        return wt/pr.first*pr.second;
        return 0;
    }
    int take=INT_MIN;
    if(dp[ind][wt]!=-1)return dp[ind][wt];
    pair<int,int> pr=vec[ind];
    if(wt>=pr.first)take=pr.second+fi(vec,wt-pr.first,ind,n,dp);
    int nottake=fi(vec,wt,ind+1,n,dp);
    return dp[ind][wt]=max(take,nottake);
}
int Memo(int n,int wt,vector<int> &profit,vector<int>& weight){
      vector<pair<int,int>> vec;
      vector<vector<int>> dp(n,vector<int>(wt+1,-1));
      for(int i=0;i<n;i++){
          vec.push_back(make_pair(weight[i],profit[i]));
      }
      sort(vec.begin(),vec.end());
      return fi(vec,wt,0,n,dp);
}
int main(){
    int n,wt;
    cin>>n>>wt;
    vector<int> profit(n),weight(n);
    for(int i=0;i<n;i++)cin>>profit[i];
     for(int i=0;i<n;i++)cin>>weight[i];

    //  ***********RECURSIVE***********
    cout<<Rec(n,wt,profit,weight)<<endl;

// *************MEMOISATION***********
cout<<Memo(n,wt,profit,weight)<<endl;
    return 0;
}