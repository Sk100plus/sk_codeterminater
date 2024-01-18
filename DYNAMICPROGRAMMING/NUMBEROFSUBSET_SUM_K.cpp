#include<bits/stdc++.h>
using namespace std;
// ************RECURSIVE METHOD**************
int f(vector<int> &vec,int target,int ind,int n){
    if(ind==n){
        if(target==0)return 1;
        return 0;

    }
    int take=0;
    if(target>=vec[ind])take=f(vec,target-vec[ind],ind+1,n);
    int nottake=f(vec,target,ind+1,n);
    return take+nottake;

}

// ***********MEMOISATION***********
int m(vector<int>&arr,int ind,int target,vector<vector<int>> &dp){
    if(ind==arr.size()){
if(target==0)return 1;
return 0;
    }
    if(dp[ind][target]!=-1)return dp[ind][target];
int take=0;
if(target>=arr[ind])take=m(arr,ind+1,target-arr[ind],dp);
int nottake=m(arr,ind+1,target,dp);
return dp[ind][target]=take+nottake;
}

    // ***********TABULATION************

int findways(vector<int>& arr,int target){
    int n=arr.size();
    vector<vector<int>> dp(arr.size(),vector<int>(target+1,0));
for(int i=0;i<n;i++)dp[i][0]=1;
if(arr[0]<=target)dp[0][arr[0]]=1;
for(int i=1;i<n;i++){
    for(int sum=0;sum<=target;sum++){
        int nottake=dp[i-1][sum];
        int take=0;
        if(arr[i]<=sum)take=dp[i-1][sum-arr[i]];
        dp[i][sum]=take+nottake;
    }
}
return dp[n-1][target];
}

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    int target;
    cin>>target;
    cout<<f(vec,target,0,n)<<endl;
    vector<vector<int>> dp(n,vector<int>(target+1,-1));
    cout<<m(vec,0,target,dp)<<endl;

    // ***********TABULATION************
    cout<<findways(vec,target);
    return 0;

}