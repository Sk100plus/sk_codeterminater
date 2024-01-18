#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}
int k;cin>>k;
vector<int> ans;
for(int i=0;i<k;i++){
    int count=0;int a=pow(2,i);
    for(int j=0;j<n;j++){
if((a & vec[j])==a)
count++;
    }
    if(count>=k)
    ans.push_back(i);
}
int ans1=0;
for(int i=0;i<ans.size();i++){
    ans1+=pow(2,ans[i]);
}

cout<<ans1;
    return 0;
}