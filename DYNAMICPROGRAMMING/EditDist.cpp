// Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

// You have the following three operations permitted on a word:

// Insert a character
// Delete a character
// Replace a character

// Input: word1 = "horse", word2 = "ros"
// Output: 3
// Explanation: 
// horse -> rorse (replace 'h' with 'r')
// rorse -> rose (remove 'r')
// rose -> ros (remove 'e')

#include<bits/stdc++.h>
using namespace std;

// *********Memoisation********
int f(string s1,string s2,int i,int j, vector<vector<int>> &dp){
     int a=0,b=0,c=0;
    if(i<0)return j+1;
    if(j<0)return i+1;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s1[i]==s2[j])return f(s1,s2,i-1,j-1,dp);
   
    else {
      a = 1 + f(s1, s2, i - 1, j,dp);
      b = 1 + f(s1, s2, i, j - 1,dp);
      c = 1 + f(s1, s2, i - 1, j - 1,dp);
    }
    return dp[i][j]=min(a,min(b,c));
}
int EditDist(string s,string t){
    int i=s.length(),j=t.length();
    vector<vector<int>> dp(i+1,vector<int>(j+1,-1));
    return f(s,t,i-1,j-1,dp);
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    cout<<EditDist(str1,str2);

// ********TABULATION*******

 int n=str1.size();
    int m=str2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    
    for(int i=1;i<=n;i++)dp[i][0]=i;
    for(int j=1;j<=m;j++)dp[0][j]=j;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1])dp[i][j]=dp[i-1][j-1];
            else {
              dp[i][j] =
                  1 + min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j]));
            }
        }
    }
cout<< dp[n][m];
    return 0;
}