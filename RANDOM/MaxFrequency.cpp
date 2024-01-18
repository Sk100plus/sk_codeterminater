#include<bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int> mp;
    int maxF=0;
    int ans=0;
    for(int i=0;i<n;i++){
    mp[arr[i]]++;
maxF=max(maxF,mp[arr[i]]);
    }
     for(int i=0;i<n;i++){
    if(maxF==mp[arr[i]]){
      ans=arr[i];break;
    }
    }
    
  return ans;
}