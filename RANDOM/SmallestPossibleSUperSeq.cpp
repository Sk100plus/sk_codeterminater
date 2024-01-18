// Smallest possible superSequence  of  two strings
// Ex: s1=abac and s2=cab then answer will be "cabac"
// which contain both the string s1 and s2;

// For finding length of shortest common supersequence :
// total length of (s1+s2)- longest common subsequence of s1 and s2;
// Step 1: finding longest common subsequence 
// in s1 and s2 ex: s1=abcde and s2=bdgek then ans: bde;

// Approach: 1:Here one based indexing occured means all element at 0th column and at 0th rows will be 0;
// 2: and applied rule if s1[i]==s2[i] then{dp[i][j]=1+dp[i-1][j-1]}
//  Else take max value of previous samerow and previous same column element 
//  3 :else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);


// FOR S1=ABCDE AND S2=BDGEK ;
// THEN 2-D MATRIX FORMED WILL BE:
//     B D G E K
//   0 0 0 0 0 0
// A 0 0 0 0 0 0
// B 0 1 1 1 1 1
// C 0 1 1 1 1 1
// D 0 1 2 2 2 2
// E 0 1 2 2 3 3
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();int m=s2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s1[i-1]==s2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

// HERE LONGEST COMMON LONGEST SUBSEQUENCE LENGTH IS DP[N][M]
// AND  SUPER SUBSEQUENCE LENGTH IS TOTAL-(LENGTH OF COMMON)
          cout<<n+m-dp[n][m]<<" "<<dp[n][m]<<endl;
          int k=n,l=m;
          int len=n+m-dp[n][m];
          string s="";
//           while(k>0&&l>0){
// if(s1[k-1]==s2[l-1]){
//     s[ind]=s1[k-1];ind--;
//     k--;l--;
// }
// else if(dp[k-1][l]>dp[k][l-1]){
//     k--;
// }
// else{
//     l--;}
//           }
        //   cout<<s<<endl;
        //   string s5;
            while(k>0 && l> 0){
                if(s1[k-1]==s2[l-1]){
                    s+=s1[k-1];
                    k--;l--;
                }
                else if(dp[k-1][l]>dp[k][l-1]){
                    s+=s1[k-1];
                            k--;
                }
                else {
                    s+=s2[l-1];l--;
                }
            }
while(k>0){
    s+=s1[k-1];
    k--;
}
while(l>0){
    s+=s2[l-1];
    l--;
}
reverse(s.begin(),s.end());
cout<<s;

        //   string s3=s1+s2;
        //   cout<<s3<<endl;
        //   string ans;
        //   unordered_map<char,int> up;
        //   for(auto s:s3)up[s]++;
        //   for(auto s:up)ans.push_back(s.first);
        //   cout<<ans<<endl;
              return 0;

} 