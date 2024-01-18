#include<bits/stdc++.h>
using namespace std;
string ShortestCommSuperSeq(string s,string t){
    int i1=s.length(),i2=t.length();
    vector<vector<int>> dp(i1+1,vector<int> (i2+1,0));
        for(int i=0;i<=i1;i++)dp[i][0]=0;
        for(int j=0;j<=i2;j++)dp[0][j]=0;

        for(int i=1;i<=i1;i++){
            for(int j=1;j<=i2;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }

            
        }
        string ans="";
        int i=i1;
        int j=i2;
        while(i>0&&j>0){
            if(s[i-1]==t[j-1]){
                ans+=s[i-1];
                i--;j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                ans+=s[i-1];
                i--;
            }
            else {
                ans+=t[j-1];
                j--;
            }
        }
        while(i>0){
            ans+=s[i-1];
            i--;
        }
        while(j>0){
            ans+=t[j-1];
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<ShortestCommSuperSeq(s,t);
    return 0;
}