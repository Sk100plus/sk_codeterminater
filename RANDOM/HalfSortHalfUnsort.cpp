#include<bits/stdc++.h>
using namespace std;
int bin(int arr[],int target,int length){
    int s=0;
    int e=length;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        e=mid-1;
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cin>>target;
int count=0;
for(int i=1;i<n;i++){
if(arr[i]>arr[i-1])
count++;
}
int ans=bin(arr,target,count);
if(ans==target||ans!=target)cout<<ans;
else{
    for(int i=count+1;i<n;i++){
        if(arr[i]==target){
            cout<<i;
            break;
        }
    }
}
    return 0;
}