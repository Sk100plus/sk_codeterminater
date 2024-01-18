#include<bits/stdc++.h>
using namespace std;
// ***** RECURRSION*****
bool Solve(vector<int>& vec,int ind,int target){
    if(ind==0)return target==vec[0];
    if(target==0)return true;
    bool take=false;
    if(target>=vec[ind])take=Solve(vec,ind-1,target-vec[ind]);
    bool nottake=Solve(vec,ind-1,target);
    return (take||nottake);
}
// ******MEMOIATION******
bool solve(vector<int>& vec,int ind,int target,vector<vector<int>> &dp){
    if(ind==0)return target==vec[0];
    if(target==0)return true;
if(dp[ind][target]!=-1)return dp[ind][target];
bool take=false;
if(target>=vec[ind])take=solve(vec,ind-1,target-vec[ind],dp);
bool nottake=solve(vec,ind-1,target,dp);
return dp[ind][target]=take||nottake;
}

// *********TABULATION******
bool Subset(vector<int>& vec,int n,int target){
    vector<vector<bool>> dp(n,vector<bool>(target+1,0));
for(int i=0;i<n;i++)dp[i][0]=true;
dp[0][vec[0]]=true;
for(int i=1;i<n;i++){
    for(int tu=1;tu<=target;tu++){
        bool nottake=dp[i-1][tu];
        bool take=false;
        if(vec[i]<=tu)take=dp[i-1][tu-vec[i]];
        dp[i][tu]=take||nottake;
    }
}
return dp[n-1][target];
}
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    int target;
    cout<<"Enter the value of target : "<<endl;
    cin>>target;
    if(Solve(vec,n-1,target))
    cout<<"There exists a subsequence whose sum is : "<<target<<endl;
else cout<<"There is no any subsequence whose sum is "<<target<<endl;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
 if(solve(vec,n-1,target,dp))
    cout<<"There exists a subsequence whose sum is : "<<target<<endl;
else cout<<"There is no any subsequence whose sum is "<<target<<endl;

 if(Subset(vec,n,target))
    cout<<"There exists a subsequence whose sum is : "<<target<<endl;
else cout<<"There is no any subsequence whose sum is "<<target<<endl;
    return 0;
}
