#include<bits/stdc++.h>
using namespace std;
int MaxSumSubSequence(vector<int> &vec){
    int n=vec.size();
vector<int> ans(n);
for(int i=0;i<n;i++){
ans[i]=vec[i];
}
int check=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if(vec[i]>vec[j]){
            ans[i]=max(ans[j]+vec[i],ans[i]);
        }
        check=max(check,ans[i]);
    }
}
return check;
}
int main(){
    int n;cin>>n;
        vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<MaxSumSubSequence(vec);
    return 0;
}