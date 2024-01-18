#include<bits/stdc++.h>
using namespace std;
int main(){
    int  tt;
    cin>>tt;
    while(tt--){
       int  n,q;
        cin>>n>>q;
        vector<int > vec1(n);vector<int> vec2(q);
        for(int i=0;i<n;i++)cin>>vec1[i];
                for(int  i=0;i<q;i++)cin>>vec2[i];
for(int i=0;i<q;i++){
    long long val=pow(2,vec2[i]);
    for(int j=0;j<n;j++){
if(vec1[j]%val==0)
vec1[j]+=pow(2,vec2[i]-1);
    }
}
for(int i=0;i<vec1.size();i++){
    cout<<vec1[i]<<" ";
}
cout<<endl;
    }
    return 0;
}
