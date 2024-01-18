#include<bits/stdc++.h>
using namespace std;

int M = 1e9+7;

int Create(string &s, string &t, int i, int j, vector<vector<int>>&dp){
	if(j < 0) return 1;
	if(i < 0) return 0;

	if(dp[i][j]!=-1) return dp[i][j];
	int ans = 0;
	if(s[i]==t[j]){
		int match = Create(s, t, i-1, j-1, dp);
		int check = Create(s, t, i-1, j, dp);
		ans = (match + check)%M;
	}
	else{
		int different = Create(s, t, i-1, j, dp);
		ans = different%M;
	}
	return dp[i][j] = ans%M;
}
int DistinctSubSeq(string &str,string &sub){
    int i=str.length();
    int j=sub.length();
    vector<vector<int>> dp(i+1,vector<int>(j+1,-1));
    return Create(str,sub,i-1,j-1,dp);
}
int main(){
    string str,sub;
    cin>>str>>sub;
    cout<<DistinctSubSeq(str,sub);
    return 0;
}