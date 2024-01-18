// You are given an array 'arr' of strings, where each
//  string consists of English lowercase letters.
// A string chain of 'arr' is defined as:

// (1) A sequence of string formed using elements of 'arr'.

// (2) Every string in the sequence can be 
// formed by inserting a lowercase English letter into 
// the previous string (except the first string).
// Find the length of the longest possible string chain of 'arr'.

#include<bits/stdc++.h>
using namespace std;

bool check(string s1,string s2){
    if(s1.length()!=s2.length()+1)return 0;
 int f=0,s=0;
 while(f<s1.length()){
     if(s1[f]==s2[s]){f++,s++;}
     else{
         f++;
     }

 }
 if(f==s1.size()&&s==s2.size())return true;
 return false;
}
bool compareByLength(const std::string& a, const std::string& b) {
    return a.length() < b.length();
}
int longestStrChain(vector<string> &arr){
    sort(arr.begin(),arr.end(),compareByLength);
    int n=arr.size();
   vector<int> dp(n,1);
   int maxi=1;
   for(int i=0;i<n;i++){
       for(int prev=0;prev<i;prev++){
           if(check(arr[i],arr[prev])&&1+dp[prev]>dp[i]){
               dp[i]=1+dp[prev];
           }
       }
       if(dp[i]>maxi)maxi=dp[i];
   }
   return maxi;
}
int main(){
    int t;
    cin>>t;
    vector<string> vec(t);
    for(int i=0;i<t;i++)cin>>vec[i];

    cout<<longestStrChain(vec);
    return 0;
}