#include<bits/stdc++.h>
using namespace std;
//             *************MEMOISATION****************
int solve(vector<int>&vec,int ind,int n,vector<vector<int>>&dp,int prev){
    if(ind ==n)return 0;
    if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
    int take=0;
    if(prev==-1||vec[prev]<vec[ind]){
        take=1+solve(vec,ind+1,n,dp,ind);

    }
    int nottake=solve(vec,ind+1,n,dp,ind);
    return dp[ind][prev+1]=max(take,nottake);
}
int UniqueIncSubseq(vector<int>& vec,int n){
int prev=-1;
int ind=0;
vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
return solve(vec,ind,n,dp,prev);
}

// **********TABULATION**************
int longUniquSub(vector<int>&vec,int n){
    vector<int> next(n+1,0),cur(n+1,0);
    for(int ind=n-1;ind>=0;ind--){
        for(int prev=ind-1;prev>=-1;prev--){
            int len=next[prev+1];
            if(prev==-1||vec[ind]>vec[prev]){
vec[prev+1]=len;
            }
           
        }
         next=cur;
    }
    return next[0];
}

int main(){
    int n;
cin>>n;
vector<int> vec(n);
for(int i=0;i<n;i++)cin>>vec[i];
cout<<UniqueIncSubseq(vec,n);
    return 0;
}