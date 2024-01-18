// You are given an array of ‘N’ distinct integers and an integer 
// ‘X’ representing the target sum. You have to tell the minimum number
//  of elements you have to take to reach the target sum ‘X’.

// Example : arr={1,2,3} and target=7;
// OUTPUT: {2,3,2} or {1,3,3} that size is 3 which is minimum

#include<bits/stdc++.h>
using namespace std;
// ******RECURSION**********
int Rec(vector<int> &vec,int target,int ind){
if(ind==0){
    if(target%vec[ind]==0)return target/vec[ind];
    return 1e9;
}
int take=INT_MAX;
if(target>=vec[ind])take=1+Rec(vec,target-vec[ind],ind);
int nottake=Rec(vec,target,ind-1);
return min(take,nottake);
}
// *************MEMOISATION************
int Memo(vector<int> &vec,int target,int ind,vector<vector<int>>&dp){
if(ind==0){
    if(target%vec[ind]==0)return target/vec[ind];
    return 1e9;
}
if(dp[ind][target]!=-1)return dp[ind][target];
int take=INT_MAX;
if(target>=vec[ind])take=1+Memo(vec,target-vec[ind],ind,dp);
int nottake=Memo(vec,target,ind-1,dp);
return  dp[ind][target]=min(take,nottake);
}
// **********TABULATION*********
int minimumElements(vector<int> &num, int x)
{
    // Write your code here.
    int ind=0;
    int n=num.size();
    int target=x;
    vector<vector<int>> dp(num.size(),vector<int>(x+1,-1));
   for(int i=0;i<=x;i++){
       if(i%num[0]==0)dp[0][i]=i/num[0];
       else dp[0][i]=1e9;
   }
   for(int i=1;i<num.size();i++){
for(int t=0;t<=target;t++){
    int take = INT_MAX;
    if (num[i] <= t) {
        take = 1 + dp[i][t-num[i]];
    }
    
    int nottake =dp[i-1][t] ;
    dp[i][t]=min(take,nottake);
}
   }
   int ans=dp[n-1][x];
   if(ans>=1e9)return -1;
   return ans;
}


int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    int target;
    cin>>target;
    if(Rec(vec,target,n-1)>=1e9)cout<<-1<<endl;
    else
    cout<<Rec(vec,target,n-1)<<endl;

// **********MEMO*************
vector<vector<int>> dp(n,vector<int>(target+1,-1));
cout<<Memo(vec,target,n-1,dp)<<endl;


// Tabulation
cout<<minimumElements(vec,target)<<endl;
    return 0;
}