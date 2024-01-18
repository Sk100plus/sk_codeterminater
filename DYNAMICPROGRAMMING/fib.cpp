
// *******       TIME-COMP=o(N)  SPACE-COMP=O(N)+O(N)    ********** 

// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n,vector<int> &dp){
//     if(n<=1)return n;
// if(dp[n]!=-1)return dp[n];
// dp[n]=fib(n-1,dp)+fib(n-2,dp);
//     return dp[n];
// }
// int main(){
//     int t;
//     cin>>t;
//     vector<int> dp(t+1,-1);
//     cout<<fib(t,dp);
// }


// ************** space comp=O(1) and time comp=O(n);


#include<bits/stdc++.h>
using namespace std;
int main(){
    int prev=0 ,prev1=1;
    int ans;
    int t;
    cin>>t;
    for(int i=2;i<=t;i++)
    {
        ans=prev+prev1;
         prev=prev1;
        prev1=ans;
       
    }
    if(t==0)
    cout<<prev;
    else
    cout<<prev1<<endl;
    return 0;

}