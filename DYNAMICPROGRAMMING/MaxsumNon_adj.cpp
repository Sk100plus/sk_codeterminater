#include<bits/stdc++.h>
using namespace std;
int ReccSol(vector<int> &vec,int ind){
    if(ind==0)return vec[ind];
    if(ind<0)return 0;
    int pick=ReccSol(vec,ind-2)+vec[ind];
    int notpick=ReccSol(vec,ind-1);
    return max(pick,notpick);
}
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<ReccSol(vec,n-1);
    return 0;
}


// using Dynamic programming
// Initialize each elements of dp with -1 vetor<int> dp(n,-1);
int DpSol(vector<int> &vec,int ind ,vector<int> &dp){
if(ind==0)return vec[ind];
if(ind<0)return 0;
if(dp[ind]!=-1)return dp[ind];
// if it picks ind value then it must goto (ind-2)
int pick=vec[ind]+DpSol(vec,ind-2,dp);
// if it does not choose vec(ind) then it must got to vec(ind-1)
int notPick=DpSol(vec,ind,dp);
return dp[ind]=max(pick,notPick);
}
// SPACE OPTIMIZATION CASE TIME O(n) ANS SPACE o(1);

// #include <bits/stdc++.h>
// int num(vector<int> &nums) {
//     int prev = nums[0];
//     int prev1 = 0;
//     for (int i = 1; i < nums.size(); i++) {
//         int t = nums[i];
//         if (i > 1) t += prev1;
//         int no = nums[i - 1];
//         int curr = max(t, no);
//         prev1 = prev;
//         prev = curr;
//     }
//     return prev;
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//     return num(nums);
// }