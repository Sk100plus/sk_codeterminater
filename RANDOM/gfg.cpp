#include<bits/stdc++.h>
using namespace std;

    int main(){

    int t;
    cin>>t;
    vector<int> arr(t);
    map<int,int> mp;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int k;cin>>k;
//   for(auto pr:mp){
//     cout<<pr.first<<" "<<pr.second<<endl;
//   }
    for(int i=0;i<arr.size()-1;i++){
                  int count=0;
           for(int j=i+1;j<arr.size();j++){
               if(arr[i]<arr[j])break;
if(arr[i]>arr[j]){
    count++;
    cout<<count<<endl;}
           }
           if(i==0){
           cout<<count<<endl;
           if(i==0&&count>=k)cout<<arr[0];
           }
//  if(1+count>=k&&i!=0)return arr[i];
       }
    return 0;
}