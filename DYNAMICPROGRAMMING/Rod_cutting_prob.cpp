// Given a rod of length ‘N’ units. The rod can be cut into 
// different sizes and each size has a cost associated with it.
//  Determine the maximum cost obtained by cutting the rod and 
//  selling its pieces.

// INPUT
// 5
// 2 5 7 8 10
// oUTPUT
// 12

// Possible length are : 1,2,3,4,5 and respective prices are : 2 ,5,7,8,10

// All possible partitions are:
// 1,1,1,1,1           max_cost=(2+2+2+2+2)=10
// 1,1,1,2             max_cost=(2+2+2+5)=11
// 1,1,3               max_cost=(2+2+7)=11
// 1,4                 max_cost=(2+8)=10
// 5                   max_cost=(10)=10
// 2,3                 max_cost=(5+7)=12
// 1,2,2               max _cost=(1+5+5)=12    


#include<bits/stdc++.h>
using namespace std;

//         **********Memoisation************** 

int F(vector<pair<int,int>> &vec,int ind,int n,int wt,vector<vector<int>> &dp){
	if(ind==n){
		return 0;
	}
	if(dp[ind][wt]!=-1)return dp[ind][wt];
	int take=INT_MIN;
	pair<int,int> pr=vec[ind];
	if(wt>=pr.first)take=pr.second+F(vec,ind,n,wt-pr.first,dp);
	int nottake=F(vec,ind+1,n,wt,dp);
	return dp[ind][wt]=max(take,nottake);
}
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<int> weight;
	for(int i=1;i<=n;i++)weight.push_back(i);
	vector<vector<int>> dp(n,vector<int>(n+1,-1));
	vector<pair<int,int>> pr;
	for(int i=0;i<n;i++){
		pr.push_back(make_pair(weight[i],price[i]));
	}
	return F(pr,0,n,n,dp);
}

// *********TABULATION***************

// BOTTOM TO UP APPROACH APPLIED 
int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	vector<vector<int>> dp(n,vector<int>(n+1,0));
	for(int i=0;i<=n;i++){
		dp[0][i]=i*price[0];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<=n;j++){
			int nott=dp[i-1][j];
			int take=INT_MIN;
			int rod=i+1;
			if(rod<=j)take=price[i]+dp[i][j-rod];
			dp[i][j]=max(take,nott);
		}
	}
	return dp[n-1][n];
}
int main(){
    int length;
    cin>>length;
    vector<int> price(length);
    for(int i=0;i<length;i++)cin>>price[i];

// **********MEMOISATION***********
cout<<cutRod(price,length);

}