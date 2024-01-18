// A thief is robbing a store and can carry a maximal weight of W into his knapsack.
//  There are N items and the ith item weighs wi and is of value vi. 
//  Considering the constraints of the maximum weight that a knapsack can carry, 
//  you have to find and return the maximum value that a thief can generate by stealing items.

// Maximise the value 
#include<bits/stdc++.h>
using namespace std;
// ********RECURSION***********
int Rec(vector<int> &weight,vector<int> &value,int n,int BagWeight,int ind){
if(ind==n)return 0;
int take=0;
if(BagWeight>=weight[ind])take=value[ind]+Rec(weight,value,n,BagWeight-weight[ind],ind+1);
int nottake=Rec(weight,value,n,BagWeight,ind+1);
return max(take,nottake);
}
// *********Memoisation**********
int Memo(vector<int> &weight,vector<int>& value,int n,int BagWeight,int ind,vector<vector<int>>& dp){
   if(ind==n)return 0;
   if(dp[ind][BagWeight]!=-1)return dp[ind][BagWeight];
int take=0;
if(BagWeight>=weight[ind])take=value[ind]+Memo(weight,value,n,BagWeight-weight[ind],ind+1,dp);
int nottake=Memo(weight,value,n,BagWeight,ind+1,dp);
return dp[ind][BagWeight]=(take,nottake); 
}
int main(){
    int n;
    cin>>n;
    vector<int> weight(n),value(n);
    for(int i=0;i<n;i++)cin>>weight[i];
    for(int j=0;j<n;j++)cin>>value[j];
    int BagWeight;
    cin>>BagWeight;
// *********RECURSION********
    cout<<Rec(weight,value,n,BagWeight,0)<<endl;
    // **********Memoisation**********
vector<vector<int>> dp(n,vector<int>(BagWeight+1,-1));
cout<<Memo(weight,value,n,BagWeight,0,dp);
    return 0;
}