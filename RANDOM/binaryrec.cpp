#include<bits/stdc++.h>
using namespace std;
int bin(int arr[],int si,int ei,int x){
    if(si>ei)return -1;
    int mid=(si+ei)/2;
    if(arr[mid]==x)return mid;
    if(arr[mid]>x){
            bin(arr,si,mid-1,x);
    }
    else{
          bin(arr,mid+1,ei,x);
    }
}

int main(){
   int arr[]={2,4,6,8,10,12};
cout<<bin(arr,0,5,12)<<endl;
cout<<bin(arr,0,5,15)<<endl;
    return 0;
}