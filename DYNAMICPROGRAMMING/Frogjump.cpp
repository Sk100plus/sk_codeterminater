// IF FROG CAN JUMP ONE OR TWO STEPS THEN !!!
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &vec,int n){
if(n==0)return 0;
int fs=solve(vec,n-1)+abs(vec[n]-vec[n-1]);
int ss;
if(n>1)ss=solve(vec,n-2)+abs(vec[n]-vec[n-2]);
return min(fs,ss);
}
int solving(vector<int>& vec,int k,int n);
int main(){
    int n;
    cin>>n;    
    int k;cin>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cout<<solve(vec,n-1)<<" "<<solving(vec,k,n);
    return 0;
}

// IF FROG CAN JUMP K STEPS AT A TIME MEAANS : 1-2-3-4-5---K;
int solving(vector<int> &vec,int k,int n){
    if(n==0)return 0;
    int dp[n];
dp[0]=0;
    for(int i=1;i<n;i++){
        int minStep=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump=dp[i-j]+abs(vec[i]-vec[i-j]);
                minStep=min(minStep,jump);
            }
        }
        dp[i]=minStep;
    }
    return dp[n-1];
}