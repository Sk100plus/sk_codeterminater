#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &vec){
    int n=vec.size();
    vector<int> left(n,0);
    vector<int> right(n,0);

    int mn=INT_MAX;
    for(int i=1;i<n-1;i++){
      mn=min(mn,vec[i-1]);
    left[i]=mn;
    }
    mn=INT_MAX;
    for(int i=n-1;i>=2;i--){
      mn=min(mn,vec[i]);
    right[i-1]=mn;
    }
    left[0]=0,left[n-1]=0,right[0]=0,right[n-1]=0;
    int ans=INT_MAX;
    for(int i=1;i<=n-2;i++){
if(vec[i]>left[i]&&vec[i]>right[i]){
    ans=min(ans,vec[i]+left[i]+right[i]);
}
    }
    if(ans==INT_MAX||ans==0)return -1;
return ans;
}
int main(){
    int n;
    cin>>n;
        vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<solve(vec);
    return 0;
}