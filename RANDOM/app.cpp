#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &vec,int n){
    map<int,int> m;
    int sum=0;
    for(int i=0;i<n;i++){
        m[vec[i]]++;
    }
    vector<int> nums;
    for(auto pr:m){
        nums.push_back(pr.second);
    }
int ans=INT_MAX;vector<int > answer;
sort(nums.begin(),nums.end());
  for(int i=1;i<=nums[0];i++){
    int a=i,b=i+1;int sum=0;
    for(int j=0;j<nums.size();j++){
            int val1=nums[j]/b;
int val2=nums[j]-val1*b;
int val3;
if(val2%a==0){
val3=val2/a;
sum=val3+val1;
answer.push_back(sum);
}
    }
    int sum1=0;
    for(int k=0;k<answer.size();k++){
        sum1+=answer[k];
    }
    ans=min(ans,sum1);
  }
  return ans;
}
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<solve(vec,n);
    return 0;
}
//   map<int,int> m;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         m[vec[i]]++;
//     }
//     vector<int> nums;
//     for(auto pr:m){
//         nums.push_back(pr.second);
//     }
// int ans=INT_MAX;
// sort(nums.begin(),nums.end());
// for(int i=1;i<=nums[0];i++){
// int a=i;int b=i+1;
// int nu=0;
// bool bad=false;
// for(int i=0;i<nums.size();i++){
//     int curr=nums[i];
//     int mn=INT_MAX,cnt=0;
//     while(curr>=0){
//         if(curr%a==0)mn=cnt+curr/a;
//         curr-=b;
//         cnt++;
//     }
//     if(mn==INT_MAX)
//     bad=true;
//     nu+=mn;
// }
// if(!bad)ans=min(ans,nu);
// }

//     return ans;