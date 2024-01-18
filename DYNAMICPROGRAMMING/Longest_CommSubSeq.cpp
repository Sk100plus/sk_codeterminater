#include<bits/stdc++.h>
using namespace std;
// *********MEMOISATION***********
int f(string s,string t,int i1,int i2,vector<vector<int>>&dp){
    if(i1<0||i2<0)return 0;
    if(dp[i1][i2]!=-1)return dp[i1][i2];
    if(s[i1]==t[i2])return dp[i1][i2]=1+f(s,t,i1-1,i2-1,dp);
    return dp[i1][i2]=max(f(s,t,i1-1,i2,dp),f(s,t,i1,i2-1,dp));
}
int LCS(string s,string t){
    int i1=s.length();
    int i2=t.length();
    vector<vector<int>> dp(i1,vector<int>(i2,-1));
    return f(s,t,i1-1,i2-1,dp);
}

// ***************TABULATION************

int lcs(string s, string t)
{
	//Write your code here
	int i1=s.length();
	int i2=t.length();
		vector<vector<int>> dp(i1+1,vector<int>(i2+1,-1));
		for(int i=0;i<=i1;i++)dp[i][0]=0;
		for(int j=0;j<=i2;j++)dp[0][j]=0;
		for(int i=1;i<=i1;i++){
			for(int j=1;j<=i2;j++){
				if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
				else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
		return dp[i1][i2];
}

int main(){
    string s,t;
    cin>>s>>t;

    // ******Memoisation********
    // cout<<LCS(s,t);

	// ********PRINTING OF LCS*********
//Write your code here
	int i1=s.length();
	int i2=t.length();
		vector<vector<int>> dp(i1+1,vector<int>(i2+1,-1));
		for(int i=0;i<=i1;i++)dp[i][0]=0;
		for(int j=0;j<=i2;j++)dp[0][j]=0;
		for(int i=1;i<=i1;i++){
			for(int j=1;j<=i2;j++){
				if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
				else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
		int lenOfLcs= dp[i1][i2];
		string ans="";
		for(int i=0;i<lenOfLcs;i++)ans+='$';

		int index=lenOfLcs-1;
		int i=i1,j=i2;
		while(i>0&&j>0){
			if(s[i-1]==t[j-1]){
				ans[index]=s[i-1];
				i--;j--;index--;
			}
			else if(dp[i-1][j]>dp[i][j-1])
			i--;
			else j--;
		}
		cout<<ans<<endl;
return 0;
}