#include<bits/stdc++.h>
using namespace std;
int LongSubArrWithSumDivByK(vector<int> &vec,int n,int k){
    int sum=0,rem,mx=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        sum+=vec[i];
        rem=sum%k;
        if(rem==0)
        mx=max(mx,i+1);
        if(rem<0)
        rem+=k;
        if(mp.find(rem)!=mp.end()){
            mx=max(mx,i-mp[rem]);
        }
        else{
            mp[rem]=i;
        }
    }
return mx;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
for(int i=0;i<n;i++)cin>>vec[i];
int k;
cin>>k;
cout<<LongSubArrWithSumDivByK(vec,n,k);
    return 0;
}